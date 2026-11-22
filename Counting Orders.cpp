#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        ll ans = 1;

        for(int i = 0; i < n; i++){
            ll cnt = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            ll ways = cnt - i;

            if (ways <= 0) {
                ans = 0;
                break;
            }

            ans = (ans * ways) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}