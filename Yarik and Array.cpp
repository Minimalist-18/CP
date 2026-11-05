#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        ll maxi = a[0], sum = a[0];

        for(int i=1; i<n; i++){
            if(abs(a[i-1]) % 2 == abs(a[i]) % 2){
                sum = 0;
            }

            sum += a[i];
            sum = max(sum,a[i]);
            maxi = max(maxi,sum);
        }

        cout << maxi << endl;
    }

    return 0;
}