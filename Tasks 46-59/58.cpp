#include <iostream>
using namespace std;

int main()
{
    int k, n, ans = 0;
    cin >> k >> n;

    ans = 1 + (n - 1) * k;
    for (int i = 0; i < k; ++i)
    {
        ans += i * (n - 2);
    }

    cout << ans;
    return 0;
}