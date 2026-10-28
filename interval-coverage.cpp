#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

static ll diff[60001], cnt[20001];
int main() {
    ll n, l, r, mr = 0, cur = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        diff[l]++; diff[r + 1]--;
        mr = r > mr ? r : mr;
    }
    for (int i = 0; i <= mr; ++i) {
        cur += diff[i];
        if (cur) cnt[cur]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (i != 1) printf(" ");
        cout << cnt[i];
    }
    return 0;
}
