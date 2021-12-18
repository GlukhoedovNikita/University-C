#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans(n);
    for (int i = 0; i < ans.size(); ++i)
    {
        cin >> ans[i];
    }

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[n - i - 1] << " ";
    }
    return 0;
}