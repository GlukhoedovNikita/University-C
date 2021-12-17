#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A(3);
    vector<int> B(3);
    int ans;
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ans = A[0] * B[0] + A[1] * B[1] + A[2] * B[2];
    cout << ans << endl;

    return 0;
}