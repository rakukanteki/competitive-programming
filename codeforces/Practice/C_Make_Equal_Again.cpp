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
    int n;  cin>>n;
    vector<int> v(n);   for(int i=0; i<n; i++){cin>>v[i];}

    // sort(v.rbegin(), v.rend());

    int l=0, r=n-1;
    while(l<n && v[l]==v[0]){l++;}

    while(r>=0 && v[r]==v[n-1]){r--;}

    int cost=0;
    if(v[0]==v[n-1]){cost=max(0, r-l+1);}
    else{cost=min(n-l, r+1);}

    cout<<cost<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}