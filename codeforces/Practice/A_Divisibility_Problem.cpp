#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int t;
    ll a, b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        int ans=0;
        if(a==b)
        {
            cout<<ans<<endl;
        }
        else if(a>b)
        {
            if(a%b==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                int rem = a%b;
                ans = b-rem;
                cout<<ans<<endl;
            }
        }
        else
        {
            ans = b-a;
            cout<<ans<<endl;
        }
    } 
}
 
int main()
{
    solve();
    return 0;
}
