#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
#define INF 100000000

bool isPrime(ll num)
{
    if(num<=1){return false;}
    if(num<=3){return true;}
    if(num%2==0 || num%3==0){return false;}
    for(int i=5; i*i<=num; i++)
    {
        if(num%i==0 || num%(i+2)==0){return false;}
    }
    return true;
}
 
void solve()
{
    int n; cin>>n;

    if(n>4)
    {
        cout<<1<<" "<<3<<" ";
        for(int i=7; i<=n; i+=2){cout<<i<<" ";}

        cout<<5<<" "<<4<<" "<<2<<" ";
        for(int i=6; i<=n; i+=2){cout<<i<<" ";}

        cout<<endl;
    }   
    else{cout<<"-1"<<endl;}
}   
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}