#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int bottles, x;
    db sum=0.0, result=0.0;
    cin>>bottles;
    vector<int> drinks;
    for(int i=0; i<bottles; i++)
    {
        cin>>x;
        drinks.push_back(x);
        sum += drinks[i];
    }
    result = sum/bottles;
    

    cout<<fixed<<setprecision(4)<<(result)<<endl;
}
 
int main()
{
    solve();
    return 0;
}
