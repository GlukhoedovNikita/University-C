#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> firms(n);
    vector<int> percent(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> firms[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> percent[i];
    }

    float income = 0, max_income = 0, ans;
    for (int i = 0; i < n; ++i)
    {
        income = float(firms[i]) * float(percent[i]) / 100;
        if (income > max_income)
        {
            max_income = income;
            ans = i + 1;
        }
    }
    cout << ans;
    return 0;
}