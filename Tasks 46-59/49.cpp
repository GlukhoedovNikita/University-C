#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); ++i)
    {
        cin >> arr[i];
    }
    
    int counter_1 = 0, counter_2 = 0;
    bool check = true;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] >= arr[arr.size() - 1 - i])
        {
            if (check)
            {
                counter_1 += arr[i];
                check = false;
            }
            else
            {
                counter_2 += arr[i];
                check = true;
            }
        }
        else
        {
            if (check)
            {
                counter_1 += arr[i];
                check = false;
            }
            else
            {
                counter_2 += arr[i];
                check = true;
            }
        }
    }
    
    cout << counter_1 << ":" << counter_2;
    return 0;
}