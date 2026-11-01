#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s = "";
        cin >> s;

        int cnt = 0;
        bool check = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && i + 1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.') {
                check = true;
                break;
            } else if(s[i] == '.') {
                cnt++;
            }
        }

        if(check){
            cout << 2 << endl;
        }else{
            cout << cnt << '\n';
        }

    }

    return 0;
}