#include<bits/stdc++.h>
using namespace std;

void solve()
{
    // Initializing
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> lists(m);
    set<int> ques, ans;
    string output = "";

    // Taking inputs
    for (int i = 1; i <= n; i++) {
        ques.insert(i);
    }
    for (int i = 0; i < m; i++) {
        cin >> lists[i];
    }
    for (int i = 0; i < k; i++) {
        int value;
        cin >> value;
        ans.insert(value);
    }

    // If ques and ans are the same, output "1" for all m values
    if (ques == ans) {
        for (int i = 0; i < m; i++) {
            output += "1";
        }
        cout << output << endl;
        return;
    }

    // If k < n-1, output "0" for all m values
    if (k < n - 1) {
        for (int i = 0; i < m; i++) {
            output += "0";
        }
        cout << output << endl;
        return;
    }

    // Checking each element in lists if it's in ans or not
    for (int i = 0; i < m; i++) {
        if (ans.find(lists[i]) != ans.end()) {
            output += "0";
        } else {
            output += "1";
        }
    }

    // Output the result
    cout << output << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
