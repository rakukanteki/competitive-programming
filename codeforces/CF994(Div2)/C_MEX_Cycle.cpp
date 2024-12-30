#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if (x == 1 && y == n)
    {
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << i % 2 << " ";
            }
            cout << endl;
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                cout << i % 2 << " ";
            }
            cout << 2 << endl;
        }
        return;
    }
    if (y == x + 1)
    {
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << i % 2 << " ";
            }
            cout << endl;
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                cout << i % 2 << " ";
            }
            cout << 2 << endl;
        }
        return;
    }
    else
    {
        vector<int> v(n);
        v[x - 1] = 0;
        v[y - 1] = 1;
        for (ll i = x; i < y - 1; i++)
        {
            v[i] = 1 - v[i - 1];
        }
        if (v[y - 1] == v[y - 2])
        {
            v[y - 2] = 2;
        }
        ll prev = v[y - 1];
        ll cnt = 2;
        for (ll i = y % n; i != x - 1; i = (i + 1) % n)
        {
            // v[i] = 1 - prev;
            // prev = v[i];
            cnt++;
        }
        if (cnt % 2)
        {
            v[y % n] = 2;
            for (ll i = (y + 1) % n; i != x - 1; i = (i + 1) % n)
            {
                v[i] = 1 - prev;
                prev = v[i];
                // cnt++;
            }
        }
        else
        {
            for (ll i = y % n; i != x - 1; i = (i + 1) % n)
            {
                v[i] = 1 - prev;
                prev = v[i];
                // cnt++;
            }
        }
        for(auto value:v)
        {
            cout<<value<<' ';
        }
        cout<<endl;
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