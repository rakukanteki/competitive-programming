#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int layer;
    string s1="I hate", s2="I love";
    cin>>layer;

    if(layer==1)
    {
        cout<<s1<<" it";
    }
    if(layer>1)
    {
        for(int i=1; i<=layer; i++)
        {
            if(i%2!=0)
            {
                cout<<s1;
            }
            else
            {
                cout<<s2;
            }
            if(i<layer)
            {
                cout<<" that ";
            }
        }
        cout<<" it";
    }
}
 
int main()
{
    solve();
    return 0;
}
