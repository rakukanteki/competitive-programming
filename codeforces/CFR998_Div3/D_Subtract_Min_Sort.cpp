#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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

bool isSorted(const vector<ll> &v) {
    if (is_sorted(v.begin(), v.end())) {
        return true;
    } else {
        return false;
    }
}

//--------------START CODING HERE--------------
void Solution() {
    ll n, i=0;   cin>>n;
    vector<ll> a(n); for(ll i=0; i<n; i++){cin>>a[i];}

    bool isPossible = true;
    for(ll i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i+1]){isPossible=false;break;}
        else
        {
            a[i+1] -= a[i];
            a[i]=0;
        }
    }
    if(isPossible==true){yes;}
    else{no;}
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}