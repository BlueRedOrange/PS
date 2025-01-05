#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <tuple>
#include <cmath>
#define MAX 100001
#define ll long long
#define div 1000000009
using namespace std;

bool checkNum(int n) {
	int tmp = n;
	int a, b, c, d;
	a = n / 1000;
	n = n % 1000;
	b = n / 100;
	n = n % 100;
	c = n / 10;
	n = n % 10;
	d = n;
	int arr[4] = { a,b,c,d };
	int ans = 9999;
	for (int i = 0; i < 4; i++) {
		ans = min(ans, arr[i % 4] * 1000 + arr[(i + 1) % 4] * 100 + arr[(i + 2) % 4] * 10 + arr[(i + 3) % 4]);
	}
	if (tmp == ans) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	int w, x, y, z;
	int ans = 0;
	vector<int>num;
	cin >> w >> x >> y >> z;
	num.push_back(w);
	num.push_back(x);
	num.push_back(y);
	num.push_back(z);
	int n = 9999;
	
	for (int i = 0; i < 4; i++) {
		n = min(n, num[i % 4] * 1000 + num[(i + 1) % 4] * 100 + num[(i + 2) % 4] * 10 + num[(i + 3) % 4]);
	}
	int tmp = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				for (int m = 1; m <= 9; m++) {
					tmp = i * 1000 + j * 100 + k * 10 + m;
					if (checkNum(tmp)) {
						if (tmp < n) {
							ans += 1;
						}
					}
					
				}
			}
		}
	}
	cout << ans+1;
	return 0;
}