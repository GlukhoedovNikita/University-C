#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<int> floors;
    int floor = 100, size_floors = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '1')
        {
            floor++;
            floors.insert(floor);
        }
        else
        {
            floor--;
            floors.insert(floor);
        }
    }
    cout << floors.size();
    return 0;
}