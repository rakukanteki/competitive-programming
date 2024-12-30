#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int t;
    cin>>t;
    string s, prev;
    cin>>s;
    prev=s;
    int count=1;

    for(int i=2; i<=t; i++)
    {
        cin>>s;
        if(prev==s)
        {
            continue;
        }
        else
        {
            count++;
        }
        prev=s;
    }
    cout<<count<<endl;
}
 
int main()
{
    solve();
    return 0;
}
