#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int n;
    cin>>n;
    int flag=0, arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }  

    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}
 
int main()
{
    solve();
    return 0;
}
