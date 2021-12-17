#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> bridge(n);
    int max_height = 437;
    for (int i = 0; i < bridge.size(); i++)
    {
        cin >> bridge[i];
    }

    for (int i = 0; i < bridge.size(); i++)
    {
        if (bridge[i] <= max_height)
        {
            cout << "Crash " << i + 1 << endl;
            return 0;
        }
    }

    cout << "No Crash" << endl;
}
