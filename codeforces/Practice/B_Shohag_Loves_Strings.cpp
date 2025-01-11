#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
 
    if (s.size() > 1)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s[i] << s[i + 1] << '\n';
                return;
            }
        }
    }
 
    if (s.size() > 2)
    {
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] != s[i + 2])
            {
                cout << s[i] << s[i + 1] << s[i + 2] << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
