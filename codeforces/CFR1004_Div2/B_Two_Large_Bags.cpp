#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define INF 100000000
#define MIN -1e11

// Helper functions
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
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

// Function to generate random number in range [l, r]
ll getRandomNumber(ll l, ll r) {
    random_device rd;
    mt19937 rng(rd());
    return uniform_int_distribution<ll>(l, r)(rng);
}

// Function to calculate nCk
ll nCk(ll n, ll k) {
    ll res = 1;
    for (ll i = 0; i < k; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

//--------------START CODING HERE--------------
void Solution() {
     ll n;  cin>>n;
     vector<ll> v;
     set<ll> bag;
     map<ll, ll> freq;

     for(int i=0; i<n; i++)
     {
        ll val;
        cin>>val;
        freq[val]++;
        bag.insert(val);
     }

     while(!bag.empty())
     {
        ll mn = *bag.begin();

        if(freq[mn] == 1){no;return;}
        freq[mn+1] += freq[mn]-2;
        bag.erase(mn);

        if(freq[mn+1]){bag.insert(mn+1);}

        freq[mn]=0;
     }

     yes;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}