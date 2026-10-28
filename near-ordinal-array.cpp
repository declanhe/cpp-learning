#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

bool mono(const vector<int>& arr, int s, int e, bool inc) {
    for (int i = s + 1; i < e; ++i) {
        if (arr[i] > arr[i - 1] && inc == false) return false;
        else if (arr[i] < arr[i - 1] && inc != false) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i <= n; ++i) {
        bool l = mono(a, 0, i, false) || mono(a, 0, i, true);
        bool r = mono(a, i, n, false) || mono(a, i, n, true);
        if (l && r) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}