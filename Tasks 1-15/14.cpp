#include <iostream>
using namespace std;
int fibonacci(int n, int a1, int a2);

int main()
{
    int n, an1, an2;

    cin >> n >> an1 >> an2;

    int a1 = 1, a2 = 1;

    while (true)
    {
        if (fibonacci(n, a1, a2) == an1)
        {
            cout << a1 << " " << a2;
            return 0;
        }
        else
        {
            a1++;
            a2++;
        }
    }
}

int fibonacci(int n, int a1, int a2)
{

    if (n > 3)
    {
        return fibonacci(n - 1, a1, a2) + fibonacci(n - 2, a1, a2);
    }
    if (n == 3)
    {
        return a1 + a2;
    }
    if (n == 2)
    {
        return a2;
    }
    if (n == 1)
    {
        return a1;
    }
}