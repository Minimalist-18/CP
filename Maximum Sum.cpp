#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        vector<ll> pref(n+1, 0);

        for(int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + a[i];
        }

        ll ans = 0;

        for(int i = 0; i <= k; i++) {
            ll removed = pref[2*i] + (pref[n] - pref[n-(k-i)]);
            ans = max(ans, pref[n] - removed);
        }

        cout << ans << '\n';
    }

    return 0;
}