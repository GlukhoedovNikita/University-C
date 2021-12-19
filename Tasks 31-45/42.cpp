#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < numbers.size(); ++i)
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    cout << numbers[0] * numbers[1] * numbers[2];
    return 0;
}