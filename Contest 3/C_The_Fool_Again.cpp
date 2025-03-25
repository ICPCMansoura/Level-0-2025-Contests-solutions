// #include <bits/stdc++.h>
// using namespace std;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// void solve() {
//     int a , b , c;
//     cin >> a >> b >> c;

//     if(a + b >= 10 || b + c >= 10 || a + c >= 10)
//         cout << "YES";
//     else
//         cout << "NO";

//     cout << '\n';
// }

// int main() {
//     fastio();
//     int t = 1;
//      cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
 int arr[3];
 cin >> arr[0] >> arr[1] >> arr[2];
 
 sort(arr , arr + 3);

 if(arr[2] + arr[1] >= 10)
    cout << "YES\n";
 else
    cout << "NO\n";


}

int main() {
    fastio();
    int t = 1;
     cin >> t;
    while (t--)
        solve();
    return 0;
}