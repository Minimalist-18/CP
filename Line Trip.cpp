#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int maxi = v[0];
        for(int i=0; i<v.size()-1; i++){
            int diff = v[i+1] - v[i];

            maxi = max(maxi,diff);
        }

        int diff = 2 * (x - v[n-1]);

        maxi = max(maxi,diff);

        cout << maxi << endl;
    }

    return 0;
}