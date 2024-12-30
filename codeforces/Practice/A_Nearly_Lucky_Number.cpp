#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int count=0;
    bool flag = false;
    cin>>n;
    int length = n.size();

    for(int i=0; i<n.size(); i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if(count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}