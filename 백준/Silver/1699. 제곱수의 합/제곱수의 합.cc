#include <iostream>
#include <algorithm>
#define MAX 100001
#define ll long long
using namespace std;
ll dp[MAX];
int N;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[N];
	return 0;
}