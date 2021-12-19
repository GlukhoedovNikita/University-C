#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool octal_form(int number);

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans(0);
    for(int i = 0; i < arr.size(); ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] > 0 and octal_form(arr[i]))
        {
            ans.push_back(arr[i]);
        }
    }

    cout << ans.size() << endl;

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }

}

bool octal_form(int number)
{  
    int check;
    check = ((number / 64) % 8) % 2;
    if (check != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}