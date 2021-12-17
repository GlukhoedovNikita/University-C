#include <iostream>
using namespace std;
bool bin_number(int a)
{
    while (a != 1)
    {
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cin >> N;

    if (bin_number(N))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}