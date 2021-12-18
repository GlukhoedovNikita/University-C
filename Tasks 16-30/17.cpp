#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, max = 0;
    cin >> N;

    vector<int> begin_work(N);
    vector<int> end_work(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> begin_work[i] >> end_work[i];
    }

    vector<int> ans(31);

    for (int i = 0; i < N; ++i)
    {
        for (int j = begin_work[i]; j <= end_work[i]; ++j)
        {
            ans[j]++;
        }
    }

    for (int i = 0; i < ans.size(); ++i)
    {
        if (max < ans[i])
        {
            max = ans[i];
        }
    }

    if (max != N)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}