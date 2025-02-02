#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define MAX 1025
#define ll long long
using namespace std;
int N;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	int N;
	cin >> N;
	while (N != 0) {
		vector<int>v;
		vector<int>temp;
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		for (int i = 0; i < 6; i++) {
			temp.push_back(1);
		}
		for (int i = 6; i < N; i++) {
			temp.push_back(0);
		}
		do {
			for (int i = 0; i < N; i++) {
				if (temp[i] == 1) {
					cout << v[i] << " ";
				}
			}
			cout << "\n";
		} while (prev_permutation(temp.begin(), temp.end()));
		v.clear();
		temp.clear();
		cout << "\n";
		cin >> N;
	}
	return 0;
}