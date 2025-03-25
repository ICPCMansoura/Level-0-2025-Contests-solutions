#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int a , b;
    cin >> a >> b;

    cout << min(a , b) << " " << max(a , b) << '\n';
}

int main() {
    fastio();
    int t = 1;
     cin >> t;
    while (t--)
        solve();
    return 0;
}