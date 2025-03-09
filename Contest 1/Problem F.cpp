#include <iostream>

using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (((x1 * x1) + (y1 * y1)) < ((x2 * x2) + (y2 * y2))) {
		cout << "Russo" << endl;
	}
	else if (((x1 * x1) + (y1 * y1)) > ((x2 * x2) + (y2 * y2))) {
		cout << "Wil" << endl;
	}
	else
		cout << "Empate" << endl;
    return 0;
}
