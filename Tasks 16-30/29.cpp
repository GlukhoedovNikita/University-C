#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < a.size(); ++i)
    {
        cin >> a[i];
    }

    cin >> m;
    vector<int> begin_j(n);
    vector<int> end_j(n);

    for (int i = 0; i < m; ++i)
    {
        cin >> begin_j[i] >> end_j[i];
    }

    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] >= begin_j[j] and a[i] <= end_j[j])
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}