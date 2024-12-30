#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int n, CurrentlyLiving, capacity;
    cin>>n;
    int count=0;
    for(int i=1; i<=n; i++)
    {
        cin>>CurrentlyLiving>>capacity;
        if((CurrentlyLiving+2)<=capacity)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
 
int main()
{
    solve();
    return 0;
}
