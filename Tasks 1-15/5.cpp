#include <iostream>
using namespace std;

int main()
{
    int N, j, i;
    int ans;
    cin >> N >> i >> j;
    if (N - j - 1 > j - i)
    {
        ans = j - i - 1;
    }
    else
    {
        ans = N - j;
    }
    cout << ans << endl;
    return 0;
}