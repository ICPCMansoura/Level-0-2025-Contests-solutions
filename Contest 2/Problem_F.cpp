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
    for (int i = 0; i < s.length(); i++) {
        if(islower(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
        if(islower(s[i])) {
            s[i] = 'z' - s[i] + 'a';
        }
        else s[i] = 'Z' - s[i] + 'A';
    }
    for (int i = s.length()-1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
}

signed main() {
    cout << fixed << setprecision(9);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    int cases=1;
    cin >> t;
    while (t--) {
        // cout << "Case #" << cases++ << ": ";
        solve();
    }
    return 0;
}
