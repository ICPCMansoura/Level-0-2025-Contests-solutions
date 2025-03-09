#include <iostream>


using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {
    int a;
	cin >> a;
    int n = 3, ans = 0;
    while(n--)
	{
		int b;
		cin >> b;
		if (b > a)
		{
			ans++;
		}
	}
	cout << ans << endl;
	}
	return 0;
}
