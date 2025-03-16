#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define MAX 100001
#define ll long long
using namespace std;
priority_queue <int, vector <int>, greater <int>> q;
int N;
int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int N, num;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num != 0) {
			q.push(num);
		}
		else {
			if (q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}
	return 0;
}