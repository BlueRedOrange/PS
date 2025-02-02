#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define MAX 1025
#define ll long long
using namespace std;
int N;
int chair[MAX][MAX];
int rec(int i, int j, int n) {
	if (n == 1) {
		return chair[i][j];
	}
	vector<int>v;
	int tmp;
	int a = rec(i, j, n / 2);
	int b = rec(i, j + n / 2, n / 2);
	int c = rec(i + n / 2, j, n / 2);
	int d = rec(i + n / 2, j + n / 2, n / 2);
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	sort(v.begin(), v.end());
	tmp = v[1];
	v.clear();
	return tmp;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> chair[i][j];
		}
	}
	cout<<rec(0, 0, N);
	return 0;
}