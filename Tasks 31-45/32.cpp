#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> berries(n);
    for (int i = 0; i < berries.size(); ++i)
    {
        cin >> berries[i];
    }

    int sum_neighboring = 0, sum_extremes = 0, ans = 0;
    for (int i = 0; i < berries.size(); ++i)
    {
        if (i > 0 and i < berries.size() - 1)
        {
            sum_neighboring = berries[i] + berries[i - 1] + berries[i + 1];
        }
        else
        {
            sum_extremes = berries[i];
        }
        if (sum_neighboring > sum_extremes)
        {
            if (ans < sum_neighboring)
            {
                ans = sum_neighboring;
            }
        }
        else
        {
            if (ans < sum_extremes)
            {
                ans = sum_extremes;
            }
        }
    }

    cout << ans;
    return 0;
}