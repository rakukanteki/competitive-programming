#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int n, k;
    cin>>n;
    vector<int> v(n+1), result(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    for(int i=1; i<=n; i++)
    {
        result[v[i]] = i;
    }   

    for(int i=1; i<=n; i++)
    {
        cout<<result[i]<<" ";
    }
}
 
int main()
{
    solve();
    return 0;
}
