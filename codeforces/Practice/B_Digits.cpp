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
    ll n,d; cin>>n>>d;
    vector<ll>ans;

    ans.push_back(1);

    if(n>=3 || d%3==0){ans.push_back(3);}

    if(d==5){ans.push_back(5);}

    if(n>=3 || (n>=2 && d==7)){ans.push_back(7);}

    if(n>=6){ans.push_back(9);}

    else
    {
        ll factorial = 1;
        int i=2;
        while(i<=n)
        {
            factorial *= i;
            i++;
        }
        if((factorial*d)%9==0){ans.push_back(9);}
    }

    for(auto val: ans){cout<<val<<' ';}
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}