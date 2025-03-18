#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define ld long double
#define endl "\n"
#define Endl "\n"

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};
const int mod = 1e9 + 7, oo = 2e18;
const int N = 5001;

void solve() {
    string s;
    cin >> s;
    bool Y=0,S=0,E=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='Y') Y=1;
        if(s[i]=='e') E=1;
        if(s[i]=='s') S=1;
    }
    if(Y and E and S)
        cout<<"Ziad eld3eef";
    else
        cout <<"Ziad is weak";
}

signed main() {
    cout << fixed << setprecision(9);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    int cases=1;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << cases++ << ": ";
        solve();
    }
    return 0;
}

