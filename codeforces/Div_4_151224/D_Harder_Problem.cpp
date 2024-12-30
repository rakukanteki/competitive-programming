#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n], visited[n]={0};
    vector<int>b;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(!visited[a[i]-1])
        {
            visited[a[i]-1] = 1;
            b.push_back(a[i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            b.push_back(i+1);
        }
    }

    for(int value:b)
    {
        cout<<value<<" ";
    }
    cout<<endl;

}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
