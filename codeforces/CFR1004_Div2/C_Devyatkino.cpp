#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define INF 100000000
#define MIN -1e11

// Helper functions
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
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

// Function to generate random number in range [l, r]
ll getRandomNumber(ll l, ll r) {
    random_device rd;
    mt19937 rng(rd());
    return uniform_int_distribution<ll>(l, r)(rng);
}

// Function to calculate nCk
ll nCk(ll n, ll k) {
    ll res = 1;
    for (ll i = 0; i < k; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

//--------------START CODING HERE--------------
bool containsDigit7(ll num) {
    while(num > 0) {
        if(num % 10 == 7) {
            return true;
        }
        num /= 10;
    }
    return false;
}


bool minOperations(ll num, int remainder)
{
    ll difference = num - remainder;
    int length = 0;
    int digitsArray[20] = {0};

    if(difference == 0) {
        digitsArray[length++] = 0;
    } else {
        while(difference > 0) {
            digitsArray[length++] = difference % 10;
            difference /= 10;
        }
    }
    int maxLength = max(length, 12);
    const int maxCarry = 40;
    int dp[32][42] = {0}, nextDp[32][42] = {0};
    dp[remainder][0] = 1;

    for(int position = 0; position < maxLength; position++) {
        for(int i = 0; i <= remainder; i++) {
            for(int j = 0; j < maxCarry; j++) {
                nextDp[i][j] = 0;
            }
        }

        int digit = (position < length ? digitsArray[position] : 0);

        for(int rem = 0; rem <= remainder; rem++) {
            for(int carry = 0; carry < maxCarry; carry++) {
                int mask = dp[rem][carry];
                if(mask == 0) { continue; }
                for(int add = 0; add <= rem; add++) {
                    int total = digit + carry + add;
                    int newDigit = total % 10;
                    int newCarry = total / 10;
                    
                    if(newCarry >= maxCarry) { continue; }

                    int newRem = rem - add;
                    int newMask = mask;
                    if(newDigit == 7) { newMask |= 2; }
                    nextDp[newRem][newCarry] |= newMask;
                }
            }
        }
        for(int i = 0; i <= remainder; i++) {
            for(int j = 0; j < maxCarry; j++) {
                dp[i][j] = nextDp[i][j];
            }
        }
    }
    return (dp[0][0] & 2) != 0;
}


void Solution() {
    ll num;
    cin >> num;
    if(containsDigit7(num)) { cout << 0 << endl; return; }

    int result = -1;
    for(int r = 1; r <= 30; r++) {
        if(minOperations(num, r)) {
            result = r;
            break;
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}