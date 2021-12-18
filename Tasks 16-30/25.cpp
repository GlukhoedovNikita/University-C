#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while (n > 1)
    {
        n -= 2;
        ans++;
    }

    cout << ans << endl;
    return 0;
}