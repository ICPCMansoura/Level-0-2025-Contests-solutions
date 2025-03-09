#include <iostream>


using namespace std;
#define int long long
#define endl '\n'
int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int l, r;
	cin >> l >> r;
	cout << (r * (r + 1) / 2) - (l * (l - 1) / 2) << endl;
    return 0;
}
