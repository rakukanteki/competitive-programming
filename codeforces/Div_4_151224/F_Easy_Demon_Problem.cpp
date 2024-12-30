#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    ll n,m,q;
    cin>>n>>m>>q;
    vector<ll> a(n), b(m);
 
    for(ll i=0; i<n; i++){cin>>a[i];}
    for(ll i=0; i<m; i++){cin>>b[i];}
 
    ll A = accumulate(a.begin(), a.end(), 0LL);
    ll B = accumulate(b.begin(), b.end(), 0LL);
 
    vector<ll> sumA, sumB;
 
    for(ll i=0; i<n; i++){sumA.push_back(A-a[i]);}
    for(ll i=0; i<m; i++){sumB.push_back(B-b[i]);}
 
    sort(sumA.begin(), sumA.end());
    sort(sumB.begin(), sumB.end());
 
    function<bool(ll, ll)> check = [&](ll p, ll q)
    {
        return *lower_bound(sumA.begin(), sumA.end(), p) == p && *lower_bound(sumB.begin(), sumB.end(), q) == q;
    };
 
    while (q--)
    {
        ll x;
        cin>>x;
        bool flag = false;
        bool sign = x>=0;
        x = abs(x);
 
        for(ll i=1; i*i<=x; i++)
        {
            if(x%i == 0)
            {
                ll p=i, q=x/i;
 
                if(sign)
                {
                    if(check(p,q) || check(-p, -q))
                    {
                        flag=true;
                        break;
                    }
                }
                else
                {
                    if(check(-p, q) || check(p, -q))
                    {
                        flag = true;
                        break;
                    }
                }
                swap(p, q);
                if(sign)
                {
                    if(check(p,q) || check(-p, -q))
                    {
                        flag=true;
                        break;
                    }
                }
                else
                {
                    if(check(-p, q) || check(p, -q))
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag==true){yes;}
        else{no;}
    }
    
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}