#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES\n"<<endl 
#define no cout<<"NO\n"<<endl 
 
void solve()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll x;
        cin>>x;
        if(x%33==0)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}