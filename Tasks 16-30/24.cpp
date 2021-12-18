#include <iostream>
using namespace std;

int units_binary_form(int a);

int main()
{
    int n;
    cin >> n;

    cout << n + units_binary_form(n);
    return 0;
}

int units_binary_form(int a)
{
    int ans;
    while (a)
    {
        if (a % 2 == 1)
        {
            ans++;
        }
        a /= 2;
    }
    return ans;
}