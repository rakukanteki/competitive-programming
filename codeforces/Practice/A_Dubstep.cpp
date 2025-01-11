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
    string s, ans;   cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s.substr(i,3)=="WUB")
        {
            i+=3;
            if(!ans.empty() && ans.back() !=' ')
            {ans+=' ';}
        }
        else
        {
            ans += s[i];
            i++;
        }
    }

    while(!ans.empty() && ans.back() == ' ')
    {ans.pop_back();}

    cout<<ans<<endl;
    
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