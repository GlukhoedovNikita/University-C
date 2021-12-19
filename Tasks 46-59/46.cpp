#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >>n;
    
    vector<int> array(n);
    for(int i = 0; i < array.size(); ++i)
    {
        cin >> array[i];
    }

    int sum_arr = 0, max_arr = array[0], min_arr = array[0], index_max = 0, index_min = 0;

    for (int i = 0; i < array.size(); ++i)
    {
        if (array[i] > 0)
        {
            sum_arr += array[i];
        }
        if (max_arr < array[i])
        {
            max_arr = array[i];
            index_max = i;
        }
        if (min_arr >= array[i])
        {
            min_arr = array[i];
            index_min = i;
        }
    }

    int ans = 1;
    if (index_max > index_min)
    {
        for (int i = index_min + 1; i < index_max; ++i)
        {
            ans *= array[i];
        }
    }
    else
    {
        for (int i = index_max + 1; i < index_min; ++i)
        {
            ans *= array[i];
        }
    }

    cout << sum_arr << " " << ans;
    return 0;
}