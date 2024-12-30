#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    string s;
    cin>>s;
    int length = s.size();
    int z =count(s.begin(), s.end(), '0');
    // If there is no zero in string. Then result; 1->length and 1
    if(z==0)
    {
        cout<<1<<' '<<length<<' '<<1<<' '<<1<<endl;
        return;
    }

    //Count 1s from the start.
    int count1=0, count0=0;
    for(int i=0; i<length; i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        else
        {
            break;
        }
    }

    //Count the starting 0s.
    for(int i=count1; i<length; i++)
    {
        if(s[i]=='1')
        {
            break;
        }
        else
        {
            count0++;
        }
    }

    int i1 = max(1, count1+1 - count0); //Going backward.
    int i2 = min(count0, count1);

    cout<<1<<' '<<length<<' '<<i1<<' '<<length-i2<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}