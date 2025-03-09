#include <iostream>

using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	cout << (a-b > 0 ? a-b : 0) << endl;
	return 0;
}
