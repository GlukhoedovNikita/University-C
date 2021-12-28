#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < arr.size(); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size() - 1; ++i)
    {
        if (arr[i] != arr[i + 1] - 1)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}