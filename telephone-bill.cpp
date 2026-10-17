#include <iostream>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        long long cost = 0, freeMinutes = K;
        for (long long i = 0; i < N; ++i) {
            long long Ti, Di;
            cin >> Ti >> Di;
            long long useFree = Ti < freeMinutes ? Ti : freeMinutes;
            freeMinutes -= useFree;
            cost += (Ti - useFree) * Di;
        }
        cout << cost << endl;
    }
    return 0;
}