#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
 
void solve()
{
    ll n;
    cin>>n;
    ll sumEven=0, sumOdd=0, EvenNum=0, OddNum=0;

    if(n%2==0)
    {
        EvenNum = n/2;
        OddNum = n/2;
    }
    else
    {
        OddNum = (n/2)+1;
        EvenNum = n/2;
    }
    sumEven = (EvenNum*(EvenNum+1));
    sumOdd = (OddNum*OddNum);
    cout<<sumEven-sumOdd<<endl;
}
 
int main()
{
    solve();
    return 0;
}
