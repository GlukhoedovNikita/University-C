#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool duplicate_numbers(int number);

int main()
{
    int n;
    cin >> n;

    vector<int> arr(100);
    int index = 0, val = 1;
    while (index != 100)
    {
        if (val > 10 and duplicate_numbers(val))
        {
            arr[index] = val;
            val ++;
            index ++;
        }
        else
        {
            if (val <= 10)
            {
                arr[index] = val;
                val ++;
                index ++;
            }
            else
            {
                val++;
            }
        }
    }

    cout << arr[arr.size() - 1];
    return 0;
}

bool duplicate_numbers(int number)
{   
    set<int> numbers;
    while (number)
    {
        numbers.insert(number % 10);
        number /= 10;
    }
    if (numbers.size() > 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}