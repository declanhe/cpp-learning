#include <iostream>
using namespace std;
static int n, k, m, d, ans;

int main() {
    cin >> n >> k >> m >> d;
    for (int x = 1; x <= m; ++x) {
        int num = n / x;
        int round = (num + k - 1) / k;
        if (round > d) continue;
        int cnt = x * round;
        ans = cnt > ans ? cnt : ans;
    }
    cout << ans << endl;
    return 0;
}
