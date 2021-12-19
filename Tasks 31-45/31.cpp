#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    vector<int> teams(n);
    for (int i = 0; i < teams.size(); ++i)
    {
        cin >> teams[i];
    }

    cin >> k;
    int ans = 0;

    for (int i = 0; i < teams.size(); ++i)
    {
        if (teams[i] > k)
        {
            ans += k;
        }
        else
        {
            ans += teams[i];
        }
    }

    cout << ans;
    return 0;
}