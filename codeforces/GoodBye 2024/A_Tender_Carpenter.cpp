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
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
 
    bool flag=true;
 
    for(int i=0; i<n; i++)
    {
        if(i-1>=0 and v[i-1]>=v[i])
        {
            if(2*v[i]>v[i-1])
            {
                flag=false;
                break;
            }
        }
        else if(i-1>=0 and v[i-1]<v[i])
        {
            if(2*v[i-1]>v[i])
            {
                flag=false;
                break;
            }
        }
 
        if(i+1<n-1 and v[i+1]>=v[i])
        {
            if(2*v[i]>v[i+1])
            {
                flag=false;
                break;
            }
        }
        else if(i+1<=n-1 and v[i+1]<v[i])
        {
            if(2*v[i+1]>v[i])
            {
                flag=false;
                break;
            }
        }
    }
 
    if(flag==true){no;}
    else{yes;}
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}

