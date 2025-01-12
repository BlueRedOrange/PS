#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N;
vector<pair<int, int>>v;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int s, t;
		cin >> s >> t;
		v.push_back(make_pair(s, t));
	}
	sort(v.begin(), v.end());

	pq.push(v[0].second);
	for (int i = 1; i < N; i++) {
		pq.push(v[i].second);
		if (pq.top() <= v[i].first) {
			pq.pop();
		}
	}
	cout << pq.size();
	return 0;
}