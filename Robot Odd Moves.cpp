#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    if (a == 0 && b == 0) {
        cout << 0 << "\n";
    } else if ((a + b) % 2 == 0 && abs(b) <= a) {
        cout << a << "\n";
    } else if ((a + b) % 2 != 0 && abs(b) <= a + 1) {
        cout << a + 1 << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}