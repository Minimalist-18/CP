#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll isPossible(vector<ll> &a, ll mid, ll c){
    ll cnt = 2*mid;
    ll area = 0;

    for(auto it:a){
        area += ((it+cnt) * (it+cnt));

        if(area > c) return area;
    }

    return area;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        int ans = 0;

        for(auto it:a){
            if((x | it) == x){
                ans |= it;
            }else{
                break;
            }
        }

        for(auto it:b){
            if((x | it) == x){
                ans |= it;
            }else{
                break;
            }
        }

        for(auto it:c){
            if((x | it) == x){
                ans |= it;
            }else{
                break;
            }
        }

        if(ans == x){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}