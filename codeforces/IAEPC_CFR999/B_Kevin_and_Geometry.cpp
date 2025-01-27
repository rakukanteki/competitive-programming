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
    ll n;   cin>>n;

    vector<ll>a(n); for(int i=0; i<n; i++){cin>>a[i];}

    sort(a.begin(), a.end());

    map<int, int> mp;
    vector<int> duplicate;

    //Check duplicates
    for(int i=0; i<n; i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==2)
        {
            duplicate.push_back(a[i]);
        }
    }

    //If no duplicate
    if(duplicate.empty()){cout<<"-1"<<endl;return;}

    //If multiple duplicates.
    if(duplicate.size()>1)
    {
        cout<<duplicate[0]<<" "<<duplicate[0]<<" "<<duplicate[1]<<" "<<duplicate[1]<<endl;
        return;
    }

    //If 1 duplicate, get the non duplicates.
    int val = duplicate[0], y=2;
    vector<int> not_dup;
    for(int i=0; i<n; i++)
    {
        if(a[i]==val && y>0)
        {
            y--;
            continue;
        }
        not_dup.push_back(a[i]);
    }

    //Get 2 eligible candidates for outputs
    int flag=0;
    for(int i=0; i<not_dup.size()-1; i++)
    {
        if(2*val > abs(not_dup[i]-not_dup[i+1]))
        {
            cout<<val<<" "<<val<<" "<<not_dup[i]<<" "<<not_dup[i+1]<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){cout<<"-1"<<endl;}
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}