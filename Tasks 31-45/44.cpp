#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> gases(n);
    vector<int> experiments_begin(m);
    vector<int> experiments_end(m);
    for (int i = 0; i < gases.size(); ++i)
    {
        cin >> gases[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> experiments_begin[i] >> experiments_end[i];
    }

    for (int i = 0; i < m; ++i)
    {
        gases[experiments_end[i] - 1] += gases[experiments_begin[i] - 1];
        gases[experiments_begin[i] - 1] = 0;
    }

    for (int i = 0; i < gases.size(); ++i)
    {
        if (gases[i] > 0)
        {
            cout << i + 1 << " " << gases[i] << endl;
        }
    }
    return 0;
}