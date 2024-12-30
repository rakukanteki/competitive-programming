#include<iostream>
using namespace std;

int main()
{
    int n, p, v, t;
    int sum=0, result=0;
    cin>>n;
    while (n--)
    {
        cin>>p>>v>>t; 
        result = p+v+t;
        if(result >= 2)
        {
            sum = sum + 1;
        }
        p,v,t=0,0,0;
    }
    cout<<sum;
    

    return 0;
}