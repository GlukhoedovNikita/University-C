#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < cards.size(); ++i)
    {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());
    int sum_player = 0, sum_croupier = 0;
    for (int i = 0; i < cards.size(); ++i)
    {
        if (i < cards.size() / 2)
        {
            sum_croupier += cards[i];
        }
        else 
        {
            sum_player += cards[i];
        }
    }
    
    cout << sum_player - sum_croupier;
    return 0;
}