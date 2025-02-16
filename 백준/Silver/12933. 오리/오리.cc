#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#define MAX 1001
#define ll long long
using namespace std;
string str;
vector<char>v;
char tmp[5] = { 'q','u','a','c','k' };
int ans = -1;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> str;
	int length = str.length();
	if (length % 5 != 0) {
		cout << "-1";
		return 0;
	}
	for (int i = 0; i < length; i++) {
		v.push_back(str[i]);
	}
	int lengthTmp = v.size();
	for (int i = 1; i <= 500; i++) {
		int cnt = 0;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == tmp[cnt % 5]) {
				v[j] = '-1';
				lengthTmp--;
				cnt++;
			}
		}
		if (cnt % 5 != 0) {
			ans = -1;
			break;
		}
		if (lengthTmp==0) {
			if (cnt % 5 == 0) {
				ans = i;
				break;
			}
			else {
				ans = -1;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}