#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> items(n);
    for (int i = 0; i < items.size(); ++i)
    {
        cin >> items[i];
    }

    sort(items.begin(), items.end());
    reverse(items.begin(), items.end());

    int ans = 0, sum = 0;
    for (int i = 0; i < items.size(); ++i)
    {
        if (m > 0)
        {
            if (items[i] > 0)
            {
                ans += items[i];
                m--;
            }
        }
    }

    cout << ans;
    return 0;
}