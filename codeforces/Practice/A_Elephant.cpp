#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, result=0, rem=0;
    cin>>x;
    int arr[5] = {1, 2, 3, 4, 5};
    
    for(int i=0; i<5; i++)
    {
        result = x/5;
        rem = x%5;
        if(rem == 0)
        {
            cout<<result;
            break;
        }
        else
        {
            cout<<result+1;
            break;
        }
    }

    return 0;
}