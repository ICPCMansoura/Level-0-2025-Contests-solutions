#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int q=8;
        while (q--) {
            for (int i= 1; i < s.length(); i++) {
                if (s[i]-1>s[i-1]) {
                    s[i]--;
                    swap(s[i],s[i-1]);
                }
            }
        }
        cout << s <<endl;
}
}
