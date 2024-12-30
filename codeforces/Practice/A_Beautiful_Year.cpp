#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    int year;
    cin>>year;
    bool isUnique=false;
    for(int i=year+1; ; i++)
    {
        isUnique=true;
        int y=i;
        int arr[10] = {0};
        while(y)
        {
            int digit = y%10;
            if(arr[digit])
            {
                isUnique = false;
                break;
            }
            arr[digit]=1;
            y /= 10;
        }
        if(isUnique)
        {
            cout<<i;
            break;
        }        
    }
   
}
 
int main()
{
    solve();
    return 0;
}