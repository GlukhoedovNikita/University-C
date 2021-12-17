#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    cin >> k;

    int ans = 0;
    while (k != 0)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] > 0)
            {
                vec[i]--;
                ans++;
            }
        }
        k--;
    }

    cout << ans;

    return 0;
}