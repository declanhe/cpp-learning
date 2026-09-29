#include <iostream>
using namespace std;

int main() {
    long long d;
    cin >> d;
    // 步行: d/1.2 = 5d/6 秒
    // 骑车: d/3.0 秒 + 开车锁 27 秒 + 停车锁车 23 秒 = (2d+300)  /6 秒
    long long walk6 = 5 * d;
    long long bike6 = 2 * d + 300;
    if (bike6 < walk6)
        cout << "Bike" << endl;
    else if (bike6 > walk6)
        cout << "Walk" << endl;
    else
        cout << "All" << endl;
    return 0;
}
