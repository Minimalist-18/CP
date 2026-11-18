#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll isPossible(ll mid, vector<ll> &a){
    ll cnt = 0;

    for(int i=0; i<a.size(); i++){
        if(a[i] >= mid) continue;

        cnt += (mid - a[i]);
    }

    return cnt;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        ll low = *min_element(a.begin(),a.end());
        ll high = 2e9;
        ll ans = low;

        while(low <= high){
            ll mid = low + (high - low)/2;

            ll cnt = isPossible(mid,a);

            if(cnt <= x){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}