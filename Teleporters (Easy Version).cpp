#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--){
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);

        for(int i = 0; i < n; i++){
            ll b;
            cin >> b;

            a[i] = b+i;
        }

        int cnt = 0;

        sort(a.begin(),a.end());
        for(int i=0; i<n; i++){
            if(a[i]+1 <= c){
                c -= (a[i]+1);
                cnt++;
            }else{
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}