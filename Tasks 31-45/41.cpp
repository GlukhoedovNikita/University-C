#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> array_1(n);
    for (int i = 0; i < array_1.size(); ++i)
    {
        cin >> array_1[i];
    }

    vector<int> array_2(m);
    for (int i = 0; i < array_2.size(); ++i)
    {
        cin >> array_2[i];
    }

    set<int> set_1;
    set<int> set_2;

    for (int i = 0; i < array_1.size(); ++i)
    {
        set_1.insert(array_1[i]);
    }

    for (int i = 0; i < array_2.size(); ++i)
    {
        set_2.insert(array_2[i]);
    }

    if (set_1 == set_2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}