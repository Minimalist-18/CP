#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;

        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<long long> temp = v;
        sort(temp.begin(), temp.end());

        if(temp == v || k > 1){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}