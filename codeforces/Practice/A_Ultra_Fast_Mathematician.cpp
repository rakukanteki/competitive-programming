#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0, j=0; i<s1.size(), j<s2.size(); i++, j++)
    {   
        if(s1[i]==s2[j])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
}
 
int main()
{
    solve();
    return 0;
}
