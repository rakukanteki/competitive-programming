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
    ll n, x, y;  cin>>n>>x>>y;

    vector<ll> a(n+1);   for(int i=0; i<n; i++){cin>>a[i];}

    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += a[i];
    }

    int count=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            ll rem_sum = sum;
            rem_sum = (rem_sum-a[i]-a[j]);
            if(rem_sum >= x && rem_sum<=y)
            {
                count++;
            }
            else{continue;}
        }
    }

    cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}  