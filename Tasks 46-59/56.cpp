#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            if (3 * i + 5 * j == n)
            {
                cout << j << " " << i;
                return 0;
            }
        }
    }
}