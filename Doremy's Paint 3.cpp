#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        map<int,int> mp;

        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }

        int cnt1 = 0, cnt2 = 0;

        if(mp.size() > 2){
            cout << "NO" << endl;
        }else{
            cnt1 = mp.begin()->second;
            cnt2 = mp.rbegin()->second;
            if(cnt1 == cnt2){
                cout << "YES" << endl;
            }else if(n % 2 == 1 && abs(cnt1 - cnt2) == 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}