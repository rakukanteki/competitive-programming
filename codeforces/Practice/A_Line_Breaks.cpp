#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, count=0, flag=0;
        cin>> n >> m;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            if((s.size() <= m) && flag==0)
            {
                m -= s.size();
                count++;
            }
            else
            {
                flag=1;
            }
        }
        cout<<count<<endl;
    }
}
 
int main()
{
    cin.tie(0);
    solve();
    return 0;
}
