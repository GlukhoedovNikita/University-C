#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, A1;
    cin >> n >> A1;

    vector<int> cars(n);
    for (int i = 0; i < cars.size(); ++i)
    {
        cin >> cars[i];
    }

    sort(cars.begin(), cars.end());

    int sum = 0, ans = -1;
    for (int i = 0; i < cars.size(); ++i)
    {
        if (sum <= A1)
        {
            sum += cars[i];
            ans++;
        }
        else
        {
            cout << ans;
            return 0;
        }
    }
}