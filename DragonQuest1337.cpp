#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        long long x;
        int n, m;
        cin >> x >> n >> m;
        bool YoN = false;
        if (x - 10 * m <= 0)
            YoN = true;
        else {
            for (int i = 1; i <= n; i++) {
                x = (long long) x / 2 + 10;
                if (x - 10 * m <= 0)
                {
                    YoN = true;
                    break;
                }
            }
        }

        YoN ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}