#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsinged long long
#define db double
 
void solve()
{
    int frnds, fench, width=0;
    cin>>frnds>>fench;
    vector<int> v;
    for(int i=0; i<frnds; i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }

    for(auto value: v)
    {
        if(value<=fench)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }

    cout<<width;
}
 
int main()
{
    solve();
    return 0;
}
