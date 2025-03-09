#include <iostream>


using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
	cin >> t;
    while (t--) {
        int n; 
		cin >> n;
		int sq = n * (n + 1) * (2 * n + 1) / 6;
		int sum = n * (n + 1) / 2;
		cout << (sum * sum) - sq << endl;
    }
    return 0;
}
