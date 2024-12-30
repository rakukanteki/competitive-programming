#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    // Find how many odd numbers there are
    ll odd_count = (n + 1) / 2;  // Odd numbers are the first half of n, plus one if n is odd

    if (k <= odd_count) {
        // k-th number is in the odd numbers sequence
        cout << 2 * k - 1 << endl;
    } else {
        // k-th number is in the even numbers sequence
        cout << 2 * (k - odd_count) << endl;
    }
}
 
int main()
{
    solve();
    return 0;
}
