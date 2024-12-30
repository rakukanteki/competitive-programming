#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int exp1=a+b+c;
    int exp2=a*b*c;
    int exp3=a+b*c;
    int exp4=a*b+c;
    int exp5=a*(b+c);
    int exp6=(a+b)*c;

    cout<<max(exp1,max(exp2, max(exp3, max(exp4, max(exp5, exp6)))))<<endl;
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