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
int gameScore(ll n, ll k, vector<ll>& integers) {

    sort(integers.begin(), integers.end());
    
    int score = 0;
    int left = 0, right = n - 1;

    while (left < right) 
    {
        int current_sum = integers[left] + integers[right];
        if (current_sum == k) 
        {
            score++;
            left++;
            right--; 
        } 
        else if (current_sum < k){left++;} 
        else{right--;}
    }

    return score;
}

void Solution() {
    ll n, k;    cin>>n>>k;
    vector<ll> nums(n); for(int i=0; i<n; i++){cin>>nums[i];}

    int ans = gameScore(n, k, nums);
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}