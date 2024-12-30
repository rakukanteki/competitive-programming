#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    int n;
    cin>>n;
    vector<int> m(n), s(n);
    for(int i=0; i<n; i++){cin>>m[i];}
    for(int i=0; i<n; i++){cin>>s[i];}

    vector<int> diff(n+1, 0);
    for(int i=0; i<n; i++)
    {
        diff[i+1] = max(diff[i+1], diff[i]+m[i]-(i+1<n? s[i+1]:0));
        diff[i+1] = max(diff[i+1], diff[i]);
    }

    cout<<diff[n]<<endl;

}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}