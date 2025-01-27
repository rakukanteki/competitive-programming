#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define INF 100000000

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

bool isSorted(const vector<ll>& v) {
    return is_sorted(v.begin(), v.end());
}

// --------------START CODING HERE--------------
void Solution() {
    int n;  cin >> n;

    vector<string> graph(n);    for (int i = 0; i < n; i++) {cin >> graph[i];}

    vector<int> result(n);      for (int i = 0; i < n; i++){result[i] = i;}

    sort(result.begin(), result.end(), [&](int x, int y) 
    {
        if (x < y){return graph[x][y] == '1';} 
        else {return graph[y][x] == '0';}
    });

    for (int i = 0; i < n; i++) {
        if (i > 0){cout << " ";}
        cout << result[i] + 1;
    }
    cout <<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solution();
    }
    return 0;
}
