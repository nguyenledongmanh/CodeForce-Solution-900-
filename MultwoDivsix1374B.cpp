#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        long long n;
        cin >> n;
        long long flag3 = 0;
        while (n % 3 == 0) {
            n /= 3;
            flag3++;
        }
        long long flag2 = 0;
        bool run = true;
        while (run) {
            if (n * pow(2, flag2 - flag3) == 1)
            {
                n = 1;
                run = false;
            }
            else if (n * pow(2, flag2 - flag3) > n)
                run = false;
            flag2++;
        }
        long long result = flag3 + flag2 - 1;
        if (n == 1) 
            cout << result << endl;
        else
            cout << -1 << endl;    
    }
    return 0;
}