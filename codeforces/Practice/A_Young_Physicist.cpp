#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, x, y, z, sumX=0, sumY=0, sumZ=0;
    cin>>n;
    int matrix[n][3];
    while (n--)
    {
        cin>>x>>y>>z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX==0 && sumY==0 && sumZ==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}