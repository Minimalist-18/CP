#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n), x(q);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<q; i++){
            cin >> x[i];
        }

        int prev = 31;

        for(int i=0; i<q; i++){
            if(x[i] >= prev) continue;

            ll val = 1LL << x[i];
            for(int j=0; j<n; j++){
                if(a[j] % val == 0){
                    a[j] += (val / 2);
                }
            }
            prev = x[i];
        }

        for(auto it:a){
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}