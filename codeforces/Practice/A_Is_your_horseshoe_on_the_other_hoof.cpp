#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    vector<ll> v(4);
    ll count=0;
    for(ll i=0; i<4; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    for(ll i=0; i<v.size(); i++)
    {   
        if(v[i]!=v[i+1])
        {
            continue;
        }
        count++;
    }
    cout<<count<<endl;

    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }

}
 
int main()
{
    solve();
    return 0;
}