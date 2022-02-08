#include <bits/stdc++.h>
using namespace std;

void inputArray(long long A[], long long n) {
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
}

int main() {
    long long n;
    cin >> n;  
    long long A[n];
    inputArray(A, n);
    sort(A, A + n);
    long long case1 = A[n - 1] - A[1];
    long long case2 = A[n - 2] - A[0];
    long long result = case1 <= case2 ? case1 : case2;
    cout << result << endl;
    return 0;
}