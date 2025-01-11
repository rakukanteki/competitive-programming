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
    ll n,k; cin>>n>>k;
    vector<ll>a(n), f;
    map<ll,ll>m;
    for(int i=0; i<n; i++){cin>>a[i];m[a[i]]++;}

    for(auto val:m){f.push_back(val.second);}
    
    sort(f.begin(), f.end());
    int idx=0,j=0;
    
    for(int i=0; i<f.size(); i++)
    {
        if(f[i]>k){break;}
        else
        {
            j++;
            k -= f[i];
        }
    }
    int ans = f.size()-j;
    cout<<max(1, ans)<<endl;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
