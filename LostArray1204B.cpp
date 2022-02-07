#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    long long MinSum = 0, MaxSum = 0;
    int EmptyPos = l - 1;
    MinSum = n - EmptyPos;
    for (int i = 1; i <= EmptyPos; i++) {
        MinSum += (long long)pow(2, i);
    }
    int index = 0;
    for (index = 0; index < r - 1; index++) {
        MaxSum += (long long)pow(2, index);
    }

    for (int i = index; i < n; i++) {
        MaxSum += (long long) pow(2, index);
    }

    // cout << index << endl;

    cout << MinSum  << " " << MaxSum << endl;
    return 0;
}