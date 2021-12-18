#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, ans;
    float income, sum = 0;

    cin >> N;
    vector<float> firms(N);
    vector<float> tax(N);

    for (int i = 0; i < firms.size(); ++i)
    {
        cin >> firms[i];
    }

    for (int i = 0; i < tax.size(); ++i)
    {
        cin >> tax[i];
    }

    for (int i = 0; i < N; ++i)
    {
        income = firms[i] * tax[i] / 100;
        if (income > sum)
        {
            sum = income;
            ans = i + 1;
        }
    }

    cout << ans;
    return 0;
}