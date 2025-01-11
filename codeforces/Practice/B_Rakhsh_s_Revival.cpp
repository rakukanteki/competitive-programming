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
    int n,m,k; cin>>n>>m>>k;
    string s;
    cin>>s;

    int left=0, right=0, operation=0;
    while(right<s.size())
    {
        if(s[right]=='0')
        {
            int idx=m-1, flag=0;
            while (idx--)
            {
                if(s[right]=='0'){right++;}
                else
                {
                    right++;
                    flag=1;
                    break;
                }
            }
            if(!flag && s[right]=='0')
            {
                left=right+k;
                right=left;
                operation++;
            }
        }
        else{right++;}
    }
    
    cout<<operation<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}