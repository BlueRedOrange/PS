#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int N;
void rec(int prev, int pass, int after, int n) {
	if (n == 1) {
		cout << prev << " " << after<<"\n";
	}
	else {
		rec(prev, after, pass, n - 1);
		cout << prev << " " << after << "\n";
		rec(pass, prev, after, n - 1);
	}
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N;
	cout << (1<<N) - 1 << "\n";
	rec(1, 2, 3, N);
	return 0;
}