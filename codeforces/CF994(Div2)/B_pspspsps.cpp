#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl 
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freqS = 0, freqP = 0, idxS = 0, idxP = n;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 's')
        {
            freqS++;
            idxS = i;
        }
        if (s[i] == 'p' && idxP == n)
        {
            freqP++;
            idxP = i;
        }
    }

    if (freqS == 0 || freqP == 0 || idxS == 0 || idxP == n - 1)
    {
        yes;
    }
    else
    {
        no;
    }
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
