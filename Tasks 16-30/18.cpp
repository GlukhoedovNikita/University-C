#include <iostream>
using namespace std;

int stair_height(int k);

int main()
{
    int k;
    cin >> k;

    cout << stair_height(k);
    return 0;
}

int stair_height(int k)
{
    for (int i = 1; i <= k; ++i)
    {
        if (k <= 0)
        {
            return i - 1;
        }
        k -= i;
    }
}