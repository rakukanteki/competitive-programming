#include <iostream>
using namespace std;

// Function to compare two integers
int compare(int x, int y) {
    return (x > y) - (x < y);
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Read the card values
        int result = 0;
        // Check all possible pairings
        if (compare(a, c) + compare(b, d) > 0) result++;
        if (compare(a, d) + compare(b, c) > 0) result++;
        if (compare(b, c) + compare(a, d) > 0) result++;
        if (compare(b, d) + compare(a, c) > 0) result++;
        cout << result << endl; // Output the result
    }
    return 0;
}
