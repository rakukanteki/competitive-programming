#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    string s;
    cin>>s;
    int flag=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag = 1;
            break;
        }
        else
        {
            flag=0;
        }
    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
 
int main()
{
    solve();
    return 0;
}
