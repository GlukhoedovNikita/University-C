#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, ans = 0, counter = 1;
    cin >> n >> k;

    vector<int> price_bottles(n);
    for (int i = 0; i < price_bottles.size(); ++i)
    {
        cin >> price_bottles[i];
    }

    sort(price_bottles.begin(), price_bottles.end());
    reverse(price_bottles.begin(), price_bottles.end());

    for (int i = 0; i < price_bottles.size(); ++i)
    {
        if (k > 0)
        {
            ans += price_bottles[i];
        }
        else
        {
            ans += price_bottles[i] * (counter + 1);
            counter++;
        }
    }

    cout << ans;
    return 0;
}