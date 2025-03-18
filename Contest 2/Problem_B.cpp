#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
}

signed main() {
    fastIO();

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for (int i=0;i<s.length();i++) {
            if(s[i] == 'p') s[i] = 'q';
            else if(s[i] == 'q') s[i] = 'p';
        }

        cout << s << endl;
    }


    return 0;
}

