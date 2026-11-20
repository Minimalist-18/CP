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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        ll low = 1, high = 1e9;
        ll ans = -1;

        while(low <= high){
            ll mid = low + (high-low)/2;

            ll val = isPossible(a,mid,c);

            if(val == c){
                ans = mid;
                break;
            }else if(val > c){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}