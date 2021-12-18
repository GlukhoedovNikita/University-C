#include <iostream>
using namespace std;

int main()
{
    int s, p;
    cin >> s >> p;

    for (int i = 0; i <= 1000; ++i)
    {
        for (int j = 0; j <= 1000; ++j)
        {
            if (s == i + j and p == i * j)
            {
                if (i >= j)
                {
                    cout << j << " " << i;
                    return 0;
                }
                else
                {
                    cout << i << " " << j;
                    return 0;
                }
            }
        }
    }
}