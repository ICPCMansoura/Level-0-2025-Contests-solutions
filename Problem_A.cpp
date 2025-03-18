#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
}

signed main() {
    fastIO();

    int a,s;
    cin>>a>>s;
    if(a>s) {
        cout << "Adham is the winner";
    }
    else {
        cout << "Samer is the winner";
    }
    return 0;
}

