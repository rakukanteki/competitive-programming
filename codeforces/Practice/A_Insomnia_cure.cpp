#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
#define INF 100000000
 
void solve()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int count=0;
    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            count++;
        }
    }

    cout<<count<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    // cin>>t;
    // while(t--) 
    solve();
    return 0;
}