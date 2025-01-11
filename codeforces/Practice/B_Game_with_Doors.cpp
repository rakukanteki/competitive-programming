#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define INF 100000000

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

//--------------START CODING HERE--------------
void solve() {
    vector<pair<ll, ll>>v;
    ll u,vv,x,y;
    cin>>u>>vv;
    cin>>x>>y;

    v.push_back({u,vv});
    v.push_back({x,y});
    sort(v.begin(), v.end());

    int l=v[0].first;
    int r=v[0].second;
    int L=v[1].first;
    int R=v[1].second;

    if(r<L){cout<<1<<endl;}
    else if(r>=R)
    {
        ll ans=abs(L-R)+2;
        if(l==L){ans--;}
        if(R==r){ans--;}
        cout<<ans<<endl;
    }
    else
    {
        ll ans=abs(r-L)+2;
        if(l==L){ans--;}
        if(R==r){ans--;}
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}