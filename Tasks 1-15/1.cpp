#include<iostream>
using namespace std;

int main()
{
    int W, H, L;
    int ans;
    
    cin>>L>>W>>H;
    ans = (2*L*H + 2*W*H)/16;
    if (ans == 0)
    {
        ans++;
    }

    cout<<ans<<endl;
    
    return 0;
}