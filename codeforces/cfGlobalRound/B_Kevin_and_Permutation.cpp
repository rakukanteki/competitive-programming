#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 

void solve()
{
    ll n, k;
    cin>>n>>k;
    set<ll> st;
    
    //Taking input.
    for(int i=0; i<n; i++)
    {
        st.insert(i+1);
    }

    //Jump k positions after each iteration.
    vector<ll> result(n);
    ll v = k-1; //0 indexed.
    while (v<n)
    {
        result[v] = *st.begin();
        st.erase(st.begin());
        v += k; 
    }
    
    //Printing values.
    for(int i=0; i<n; i++)
    {   
        if(result[i])
        {
            cout<<result[i]<<" ";
        }
        else
        {
            cout<<*st.begin()<<" ";
            st.erase(st.begin());
        }
    }
    cout<<endl;
}   
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();   
    }
    return 0;
}