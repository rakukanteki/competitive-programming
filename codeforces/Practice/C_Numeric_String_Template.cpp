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
    vector<int> v(n);
    map<ll, vector<ll>>mp1;
    for(int i=0; i<n; i++){cin>>v[i];}

    int m;  cin>>m;
    vector<string> s(m);
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;

        //First Condition
        if(s.size() != n)
        {
            no;
            continue;
        }

        //Second Condition
        map<char, vector<ll>>mp;
        for(int j=0; j<s.size(); j++)
        {
            mp[s[j]].push_back(j);
        }

        bool ok=true;
        for(auto it:mp)
        {
            for(int k=0; k<it.second.size()-1; k++)
            {
                if(v[it.second[k]]!=v[it.second[k+1]]){ok=false;break;}
            }
        }
        if(!ok){no;continue;}

        //Third Condition
        map<ll, vector<ll>>mp2;
        for(int j=0; j<n; j++)
        {
            mp2[v[j]].push_back(j);
        }

        for(auto it:mp2)
        {
            for(int k=0; k<it.second.size()-1; k++)
            {
                if(s[it.second[k]]!=s[it.second[k+1]]){ok=false;break;}
            }
        }
        if(!ok){no;continue;}
        else{yes;}
    }


}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}