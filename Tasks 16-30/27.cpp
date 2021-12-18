#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int reverse_binary_form(int a);

int main()
{
    int m;
    cin >> m;

    cout << reverse_binary_form(m);
    return 0;
}

int reverse_binary_form(int a)
{
    int decimal_form = 0;
    vector<int> binary_form(0);

    while (a)
    {
        binary_form.push_back(a % 2);
        a /= 2;
    }

    for (int i = 0; i < binary_form.size(); ++i)
    {
        cout << binary_form[i] << " ";
    }

    for (int i = 0; i < binary_form.size(); ++i)
    {
        decimal_form += binary_form[binary_form.size() - i - 1] * pow(2, i);
    }

    return decimal_form;
}