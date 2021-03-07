#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<string> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = true;
		for (int i = 0; i < n; i++) {
			// if the current command is "stop" and the previous comman
			// is not "start" or "restart" then there is an error.
			// otherwise, the service is functioning well
			if (a[i] == "stop" && (a[i - 1] != "start" && a[i - 1] != "restart")) {
				checker = false;
				break;
			}
		}
		cout << (checker ? 200 : 404) << '\n';
	}
	return 0;
}
