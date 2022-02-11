#include <iostream>

using namespace std;

bool check(long long A[], long long n, long long &idxMAX) {
    long long MAX = A[0];
    long long flag = 0;
    bool changePos = false;
    for (long long i = 1; i < n; i++) {
        if (A[i] == A[i - 1])
            flag++;
        else if (A[i] > MAX) {
            MAX = A[i];
            idxMAX = i;
            changePos = true;
        }
    }

    if (!changePos)
        idxMAX = 0;

    if (flag == n - 1)
        return true;
    return false;
}

void inputVal(long long A[], long long n) {
    for (long long i = 0; i < n; i++)
        cin >> A[i];
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        long long n, idxMAX;
        cin >> n;
        long long A[n];
        inputVal(A, n);
        if (n == 2) {
            if (A[0] == A[1])
                cout << -1 << endl;
            else {
                if (A[0] > A[1])
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
        }
        else {
            bool YoN = check(A, n, idxMAX);
            if (YoN)
                cout << -1;
            else {
                if (idxMAX >= 1)
                    cout << idxMAX + 1;
                else {
                    if (A[idxMAX] != A[1])
                        cout << idxMAX + 1;
                    else {
                        for (long long i = 1; i < n; i++) {
                            if ((A[i] == A[idxMAX]) && (A[i] != A[i + 1] || A[i] != A[i - 1]))
                            {
                                idxMAX = i;
                                break;
                            }
                        }
                        cout << idxMAX + 1;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}