#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, years=1, count=0;
    cin>>a>>b;

    while(years++)
    {
        a = 3*a;
        b = 2*b;
        if(a>b)
        {
            break;
        }
        count++;
    }
    cout<<count+1;

    return 0;
}