#include <iostream>
using namespace std;
int N;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N;
	int ans = 0;
	while (N > 0) {
		if (N % 5 != 0) {
			N -= 2;
			if (N < 0) {
				ans = -1;
				break;
			}
			ans++;
		}
		else {
			ans += (N / 5);
			break;
		}
	}
	cout << ans;
	return 0;
}