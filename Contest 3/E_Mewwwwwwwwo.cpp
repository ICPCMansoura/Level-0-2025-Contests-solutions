#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n; cin >> n;
    int arr[n];

    for(int i = 0 ; i < n; i++)
        cin >> arr[i];


    int max_count = 0;
    int count = 0;
    for(int i = 0 ; i < n; i++) {
        if(arr[i] == 0)
            count++;
        else
            count = 0;
            
        max_count = max(max_count , count);
    }
    cout << max_count << '\n';
}

int main() {
    fastio();
    int t = 1;
     cin >> t;
    while (t--)
        solve();
    return 0;
}