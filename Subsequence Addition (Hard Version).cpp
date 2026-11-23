
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(auto &it:a){
            cin >> it;
        }

        sort(a.begin(),a.end());

        if(a[0] != 1){
            cout << "No" << '\n';
            continue;
        }

        ll sum = 1;
        bool flag = true;
        for(int i=1; i<n; i++){
            if(a[i] > sum){
                flag = false;
                break;
            }

            sum += a[i];
        }
        
        if(flag){
            cout << "Yes" << '\n';
        }else{
            cout << "No" << '\n';
        }

    }

    return 0;
}