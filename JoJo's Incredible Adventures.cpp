
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int n = s.length();
        int cnt = 0, maxi = 0;

        for(char c : s) {
            if(c == '1') {
                cnt++;
            } else {
                cnt = 0;
            }

            maxi = max(maxi, cnt);
        }

        if(maxi == n) {
            cout << 1LL * n * n << '\n';
            continue;
        }

        if(s[0] == '1' && s[n-1] == '1'){
            int i = 0, cnt = 0;

            while(i < n && s[i] == '1'){
                i++;
                cnt++;
            }

            int j = n - 1;

            while(j > i && s[j] == '1'){
                j--;
                cnt++;
            }

            maxi = max(maxi, cnt);
        }

        maxi++;

        cout << 1LL * ((maxi + 1) / 2) * (maxi / 2) << '\n';
    }

    return 0;
}
