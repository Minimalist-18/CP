#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        ll mn = LLONG_MAX, cntNeg = 0, sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0){
                cntNeg++;
            }
            mn = min(mn,abs(a[i]));
            sum += abs(a[i]);
        }

        if(cntNeg % 2){
            sum -= (2 * mn);
            cout << sum << endl;
        }else{
            cout << sum << endl;
        }

    }

    return 0;
}