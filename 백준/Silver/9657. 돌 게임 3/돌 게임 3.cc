#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#define MAX 1001
#define ll long long
using namespace std;
int N;
int dp[MAX];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;
	dp[4] = 0;
	for (int i = 5; i <= N; i++) {
		if (dp[i - 1] || dp[i - 3] || dp[i - 4]) {
			dp[i] = 0;
		}
		else {
			dp[i] = 1;
		}
	}
	if (dp[N] == 0) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
	return 0;
}