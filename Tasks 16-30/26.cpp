#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n + 1) % 10;
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 and n == 0)
    {
        return 1;
    }
    if (n > 1)
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}