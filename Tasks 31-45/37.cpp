#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    vector<int> number_clicks(n);
    for (int i = 0; i < number_clicks.size(); ++i)
    {
        cin >> number_clicks[i];
    }

    cin >> k;
    vector<int> clicks(k);
    for (int i = 0; i < clicks.size(); ++i)
    {
        cin >> clicks[i];
    }

    for (int i = 0; i < clicks.size(); ++i)
    {
        number_clicks[clicks[i] - 1]--;
    }

    for (int i = 0; i < number_clicks.size(); ++i)
    {
        if (number_clicks[i] >= 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}