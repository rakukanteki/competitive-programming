#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
#define vtr vector<ll>
 
void solve()
{
    int n,i=0, count=0;
    cin>>n;
    vtr a(n), v;
    //Take vector inputs.
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            if(count>0)
            {
                v.push_back(count);
            }
            count=0;
        }
        else if(a[i]>0)
        {
            count++;
            continue;
        }
    }

    if(count>0)
    {
        v.push_back(count);
    }

    if(v.empty())
    {
        cout<<'0'<<endl;
    }
    if(v.size()==1)
    {
        cout<<'1'<<endl;
    }
    if(v.size()>1)
    {
        cout<<'2'<<endl;
    }
}

 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}