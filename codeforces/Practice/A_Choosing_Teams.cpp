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

// each person can participate in the world championship at most 5 times.
// Each team must consist of exactly three people.
// any person cannot be a member of two or more teams.
// What maximum number of teams can the head make if he wants each team to participate in the world championship with the same members 
// at least k times?

void Solution() {
    int n, k;   cin>>n>>k;

    vector<int> v(n);   for(int i=0; i<n; i++){cin>>v[i];}

    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]+k > 5)
        {
            continue;
        }
        count++;
    }
    
    int ans = count/3;

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--) 
    Solution();
    return 0;
}