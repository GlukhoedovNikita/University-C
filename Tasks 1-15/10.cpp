#include <iostream>
using namespace std;
bool beutiful_number(int a)
{
    int sum = 0, k = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
        k++;
    }
    if (sum % k == 0)
        return true;
    else
        return false;
}
int main()
{
    int N, ans = 0, k = 0;
    cin >> N;
    while (k != N)
    {
        if (beutiful_number(ans + 1))
            k++;
        ans++;
    }
    cout << ans << endl;

    return 0;
}