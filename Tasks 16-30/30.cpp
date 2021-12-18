#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> days(n);
    for (int i = 0; i < days.size(); ++i)
    {
        cin >> days[i];
    }

    int valution_3 = 0, valution_4 = 0;
    vector<int> vec_3(0);
    vector<int> vec_4(0);

    for (int i = 0; i < days.size(); ++i)
    {
        if (days[i] % 2 == 0)
        {
            valution_4++;
            vec_4.push_back(days[i]);
        }
        else
        {
            valution_3++;
            vec_3.push_back(days[i]);
        }
    }

    for (int i = 0; i < vec_3.size(); ++i)
    {
        cout << vec_3[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < vec_4.size(); ++i)
    {
        cout << vec_4[i] << " ";
    }
    cout << endl;

    if (valution_3 <= valution_4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}