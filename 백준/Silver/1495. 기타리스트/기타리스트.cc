#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <tuple>
#include <cmath>
#define MAX 51
#define ll long long
#define div 1000000009
using namespace std;
int N, S, M;
int volume[MAX];
bool arr[MAX][1001];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N >> S >> M;
	for (int i = 1; i <= N; i++) {
		cin >> volume[i];
	}
	arr[0][S] = true;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= M; j++) {
			if (arr[i - 1][j] == true) {
				if (j + volume[i] <= M) {
					arr[i][j + volume[i]] = true;
				}
				if (j - volume[i] >= 0) {
					arr[i][j - volume[i]] = true;
				}
			}
		}
	}
	int ans = -1;
	for (int i = 0; i <= 1000; i++) {
		if (arr[N][i]) {
			ans = i;
		}
	}
	cout << ans;
	return 0;
}