#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <tuple>
#include <cmath>
#define MAX 91
#define ll long long
#define div 1000000009
using namespace std;
int N;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	ll dp[MAX];
	cin >> N;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[N];
	return 0;
}