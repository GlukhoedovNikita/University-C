#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> colors(n);
    for (int i = 0; i < colors.size(); ++i)
    {
        cin >> colors[i];
    } 

    vector<int> quantity_colors(99);

    for (int i = 0; i < colors.size(); ++i)
    {
        quantity_colors[colors[i] - 1] ++;
    }

    int max_colors = 0, check = 0, ans = 0;

    for (int i = 0; i < quantity_colors.size(); ++i)
    {
        if (max_colors <= quantity_colors[i])
        {
            max_colors = quantity_colors[i];
            ans = i + 1;
        }
    }

    for (int i = 0; i < quantity_colors.size(); ++i)
    {
        if (max_colors == quantity_colors[i])
        {
            check ++;
        }
        if (check > 1)
        {
            cout << 0;
            return 0;
        }
    }

    cout << ans;
    return 0;
}