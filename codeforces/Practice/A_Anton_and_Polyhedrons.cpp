#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
#define INF 100000000
 
void solve()
{   
    int n; cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++)   
    {
        
        string s; cin>>s;
        
        if(s=="Tetrahedron"){sum+=4;}
        if(s=="Cube"){sum+=6;}
        if(s=="Octahedron"){sum+=8;}
        if(s=="Dodecahedron"){sum+=12;}
        if(s=="Icosahedron"){sum+=20;}
    }

    cout<<sum<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    // cin>>t;
    // while(t--) 
    solve();
    return 0;
}