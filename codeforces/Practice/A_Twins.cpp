#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, coin;
    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Sort coins in descending order
    sort(coins.begin(), coins.end(), greater<int>());

    int totalSum = accumulate(coins.begin(), coins.end(), 0); // Total sum of all coins
    int subSum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        subSum += coins[i];
        count++;
        totalSum -= coins[i];

        if (subSum > totalSum) {
            break;
        }
    }

    cout << count << endl;
}

int main()
{
    solve();
    return 0;
}
