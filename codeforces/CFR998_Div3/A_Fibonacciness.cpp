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
int calculateFibo(int a1, int a2, int a3, int a4, int a5) {
    int count = 0;
    if (a3 == a1 + a2) count++;          
    if (a4 == a2 + a3) count++;      
    if (a5 == a3 + a4) count++;          
    return count;
}

void Solution() {
    int a1, a2, a4, a5, maxResult=0;
    cin>>a1>>a2>>a4>>a5;

    int ans1 = a1+a2;
    int ans2 = a4-a2;
    int ans3 = a5-a4;

    maxResult = max(maxResult, calculateFibo(a1, a2, ans1, a4, a5));
    maxResult = max(maxResult, calculateFibo(a1, a2, ans2, a4, a5));
    maxResult = max(maxResult, calculateFibo(a1, a2, ans3, a4, a5));

    cout<<maxResult<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}