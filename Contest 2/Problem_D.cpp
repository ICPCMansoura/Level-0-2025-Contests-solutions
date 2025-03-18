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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr+k,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
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

