#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    int A[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (A[i][j] == A[j][i] and A[i][j] == 1)
            {
                ans++;
            }
        }
    }

    cout << ans / 2;
    return 0;
}