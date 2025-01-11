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
    int n;  cin>>n;
    vector<int> a(n), b(n);
    
    for(int i=0; i<n; i++){cin>>a[i];}
    for(int i=0; i<n; i++){cin>>b[i];}

    int cnt1=0,cnt2=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i]){cnt1++;}
        if(a[i]==b[n-i-1]){cnt2++;}
    }

    if(cnt1==n || cnt2==n){cout<<"Bob"<<endl;}
    else{cout<<"Alice"<<endl;}
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}