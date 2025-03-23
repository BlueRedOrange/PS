#include <iostream>
#include <algorithm>
#include <bitset>

#define MAX 100001
#define ll long long
using namespace std;
unsigned int K;
int answer;

int find_msb_pos(unsigned int x) {
    for (int i = 31; i >= 0; --i) {
        if (x & (1u << i)) {
            return i;
        }
    }
    return -1;
}

int find_lsb_pos(unsigned int x) {
    for (int i = 0; i < 32; ++i) {
        if (x & (1u << i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> K;
    int pieces = 1;
    while (pieces < K) {
        pieces *= 2;
    }
    int msb_pos = find_msb_pos(pieces);
    int lsb_pos = find_lsb_pos(K);

    cout << pieces << " " << msb_pos - lsb_pos;
}