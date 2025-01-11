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
bool isSorted(const vector<ll> &v){
   if(is_sorted(v.begin(), v.end())){return true;}
   else{return false;}
}

//--------------START CODING HERE--------------
void solve() {
    ll n;  cin>>n;
    vector<ll> a(n);   for(int i=0; i<n; i++){cin>>a[i];}

    // Base Case
    if(a.size() == 1){cout<<0<<endl;return;}
    if(isSorted(a)){cout<<0<<endl;return;}
    
    ll cost=0, maxDiff=0;
    for(ll i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
            cost += a[i-1]-a[i];
            maxDiff = max(maxDiff, a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }
    cost += maxDiff;
    cout<<cost<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}