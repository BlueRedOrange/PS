#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, M;
int answer;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> N;
    vector<int>v(N);
    int tmp = 0;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        tmp += v[i];
    }
    cin >> M;
    if (tmp <= M) {
        answer = *max_element(v.begin(), v.end());
    }
    else {
        int start = 0;
        int end = *max_element(v.begin(), v.end());

        while (start <= end) {
            int budget = (start + end) / 2;
            int sum = 0;
            for (int i = 0; i < N; i++) {
                sum += min(v[i], budget);
            }
            if (M >= sum) {
                answer = budget;
                start = budget + 1;
            }
            else {
                end = budget - 1;
            }
        } 
    }
    cout << answer;
}