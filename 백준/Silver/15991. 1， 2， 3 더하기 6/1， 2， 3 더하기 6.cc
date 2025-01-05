#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <tuple>
#define MAX 100001
#define ll long long
#define div 1000000009
using namespace std;
int T;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> T;
	ll dp[MAX] = { 0, };

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 2;
	dp[4] = 3;
	dp[5] = 3;

	for (int i = 6; i < MAX; i++) {
		dp[i] = ((dp[i - 2] % div) + (dp[i - 4] % div) + (dp[i - 6] % div)) % div;
	}

	for (int i = 0; i < T; i++) {
		int input;
		cin >> input;
		cout << dp[input]<<"\n";
	}
	return 0;
}