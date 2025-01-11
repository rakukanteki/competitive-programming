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
void Solution() {
    int s,n;    cin>>s>>n;

    vector<pair<int, int>> dragons(n);
    for(int i=0; i<n; i++)
    {
        cin>>dragons[i].first>>dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for(const auto& dragon:dragons)
    {
        if(s>dragon.first){s+=dragon.second;}
        else{no;return;}
    }

    yes;
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--) 
    Solution();
    return 0;
}