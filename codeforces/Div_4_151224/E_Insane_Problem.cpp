#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsinged long long
#define db double

ll getRange(ll value, ll l1, ll r1, ll l2, ll r2)
{
    ll y_min = l2/value;
    ll y_max = r2/value;

    if(l2%value != 0)
    {
        y_min++;
    }

    ll minRange = max(l1, y_min);
    ll maxRange = min(r1, y_max);

    return max(0ll, maxRange-minRange+1);
}

void solve()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll k, l1, r1, l2, r2, x, y;
        cin>>k>>l1>>r1>>l2>>r2;
        vector<ll> mul;
        ll result=1ll;

        mul.push_back(result);
        while(result<=r2)
        {
            result *= k;
            mul.push_back(result);
        }
        mul.pop_back();
        
        ll ans = 0;
        for(ll i=0; i<mul.size(); i++)
        {
            ans += getRange(mul[i], l1, r1, l2, r2);
        }

        cout<<ans<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
