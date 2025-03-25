#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int n , m;

struct Book {
    string title;
    int index;
};

bool cmp(Book & b1 , Book & b2) {
    string s1 = b1.title;
    string s2 = b2.title;

    for(int i = 0 ; i < m; i++) {
        if(s1[i] == s2[i])
            continue;

        if(i % 2 == 0) //odd
            return s1[i] < s2[i];

        if(i % 2 != 0) //even
            return s1[i] > s2[i];
    }
}
void solve() {
    cin >> n >> m;
    Book arr[n];

    for(int i = 0 ; i <n; i++)
    {
        cin >> arr[i].title;
        arr[i].index = i + 1;
    }

    sort(arr , arr + n , cmp);

    for(int i = 0; i < n ;i++)
        cout << arr[i].index << " ";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}