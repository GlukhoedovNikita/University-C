#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, max_age = 0, ans;
    cin >> N;

    vector<int> gender(N);
    vector<int> age(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> age[i] >> gender[i];
    }

    for (int i = 0; i < N; ++i)
    {
        if (gender[i] == 1)
        {
            if (max_age < age[i])
            {
                max_age = age[i];
                ans = i + 1;
            }
        }
    }

    cout << ans;
    return 0;
}