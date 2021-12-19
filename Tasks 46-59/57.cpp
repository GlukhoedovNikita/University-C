#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n, bx, by, l;
    cin >> n >> bx >> by >> l;

    vector<int> coordinates_x(n);
    vector<int> coordinates_y(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> coordinates_x[i] >> coordinates_y[i];
    }

    int distance;
    for (int i = 0; i < n; ++i)
    {
        distance = pow(coordinates_x[i] - bx, 2) + pow(coordinates_y[i] - by, 2);
        if (distance <= pow(l, 2))
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}