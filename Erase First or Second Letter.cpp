#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll count = 0;
        unordered_map<char,int> mp;
        vector<int> pref(n);
        for(int i=0; i<n; i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1){
                count++;
            }

            pref[i] = count;
        }

        ll ans = 0;

        for(int i=0; i<n; i++){
            ans += pref[i];
        }

        cout << ans << endl;
    }

    return 0;
}