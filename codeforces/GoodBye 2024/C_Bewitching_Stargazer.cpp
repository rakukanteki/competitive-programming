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

pair<long long, int> calculateLucky(long long l, long long r, int limit) {
 
    if (r - l + 1 < limit) 
    {
        return {0, 0};
    }
 
    if (r - l + 1 == 1) 
    {
        return {l, 1};
    }
 
    long long mid = l + (r - l) / 2;
 
    if ((r - l + 1) % 2) 
    { 
        pair<long long, int> leftResult = calculateLucky(l, mid - 1, limit);
        long long totalLucky = mid + 2 * leftResult.first + mid * leftResult.second;
        int totalSegments = 2 * leftResult.second + 1;
        return {totalLucky, totalSegments};
    } 
    else 
    { 
        pair<long long, int> leftResult = calculateLucky(l, mid, limit);
        long long totalLucky = 2 * leftResult.first + mid * leftResult.second;
        int totalSegments = 2 * leftResult.second;
        return {totalLucky, totalSegments};
    }
}

void Solution() {
    int n,k; cin>>n>>k;
    pair<ll, int> ans = calculateLucky(1, n, k);
    cout<<ans.first<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}