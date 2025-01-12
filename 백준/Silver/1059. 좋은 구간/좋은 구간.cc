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
int L;
int cmp = 0;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	int ans = 0;
	int k = 0;
	cin >> L;
	vector<int>v;
	for (int i = 0; i < L; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cin >> cmp;
	if (L == 1) {
		for (int i = 1; i <= cmp; i++) {
			for (int j = cmp; j < v[0]; j++) {
				if (i == j) {
					continue;
				}
				else {
					cout << i << " " << j << "\n";
					ans++;
				}
			}
		}
		cout << ans;
		return 0;
	}
	for (int i = 0; i < L; i++) {
		if (v[i] == cmp && i != L - 1) {
			k = 0;
			break;
		}
		if (v[i] > cmp && i == 0) {
			for (int i = 1; i <= cmp; i++) {
				for (int j = cmp; j < v[0]; j++) {
					if (i == j) {
						continue;
					}
					else {
						//cout << i << " " << j << "\n";
						ans++;
					}
				}
			}
			cout << ans;
			return 0;
		}
		if (v[i] > cmp && i!=0) {
			k = i;
			break;
		}
	}
	if (k == 0) {
		cout << 0;
		return 0;
	}
	else {
		for (int i = v[k - 1] + 1; i <= cmp; i++) {
			for (int j = cmp; j < v[k]; j++) {
				if (i == j) {
					continue;
				}
				else {
					//cout << i << " " << j<<"\n";
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}