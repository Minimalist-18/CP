#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        ll sum = 0, maxi = 0, ans = 0;

        for(int i=0; i<min(n,k); i++){
            sum += a[i];
            maxi = max(maxi,b[i]);

            ans = max(ans, sum + (k - i - 1) * maxi);
        }

        cout << ans << endl;
    }

    return 0;
}