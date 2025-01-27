#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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

bool isSorted(const vector<ll> &v) {
    if (is_sorted(v.begin(), v.end())) {
        return true;
    } else {
        return false;
    }
}

//--------------START CODING HERE--------------
void Solution() {
    int n;  cin>>n;

    vector<ll> a(n);    for(int i=0; i<n; i++){cin>>a[i];}

    sort(a.begin(), a.end(), [](int m, int n)
    {
        int count1 = 0, count2 = 0;
        while (m%2==0)
        {
            count1++;
            m /= 2;
        }
        while (n%2==0)
        {
            count2++;
            n /= 2;
        }

        return count1>count2;
    });

    int pts=0;
    ll s = 0;

    for(int num:a)
    {
        s+=num;
        if(s%2==0)
        {
            pts++;
            while (s%2==0)
            {
                s /= 2;
            }
            
        }
    }

    cout<<pts<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}