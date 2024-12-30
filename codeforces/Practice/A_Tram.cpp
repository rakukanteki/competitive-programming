#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsinged long long
#define db double

void solve()
{
    int exit, enter, stops;
    cin>>stops;
    int totalPresent = 0, maxCapacity=0;

    for(int stop=1; stop<=stops; stop++)
    {
        cin>>exit>>enter;
        totalPresent -= exit;
        totalPresent += enter;

        maxCapacity = max(maxCapacity, totalPresent);
    } 
    cout<<maxCapacity<<endl;
}

int main()
{
    solve();
    return 0;
}
