#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, counter = 1;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < array.size(); ++i)
    {
        cin >> array[i];
    }

    while(counter != n)
    {
        for (int i = 0; i < array.size(); ++i)
        {
            if (array[i] == counter)
            {
                cout << i + 1 << " ";
                counter ++;
            }
        }
    }
    return 0;
}