#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n;
    cin >> n;

    vector<int> vec_x(n);
    vector<int> vec_y(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> vec_x[i] >> vec_y[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        int gopher, dog;
        gopher = pow(vec_x[i] - x1, 2) + pow(vec_y[i] - y1, 2);
        dog = pow(vec_x[i] - x2, 2) + pow(vec_y[i] - y2, 2);
        if (dog / 4 > gopher)
        {
            cout << i + 1;
            return 0;
        }   
    }

    cout << "NO";
    return 0;
}