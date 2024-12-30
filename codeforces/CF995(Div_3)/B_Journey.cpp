#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    ll n,a,b,c, sum=0;
    cin>>n>>a>>b>>c;
    vector<ll> v = {a,b,c};
    sum=a+b+c;
    ll distanceCovered = (n/sum) * sum;
    ll count=(n/sum)*(v.size());

    for(int i=0; i<3 && distanceCovered<n; i++)
    {
        distanceCovered += v[i];
        count++;
    }
    cout<<count<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}