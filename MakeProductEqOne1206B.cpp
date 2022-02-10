#include <bits/stdc++.h>

using namespace std;

void input(long long A[], long long n) {
    for (long long i = 0; i < n; i++)
        cin >> A[i];
}

int main() {
    long long n;
    cin >> n;
    long long a[n];
    input(a, n);
    sort(a, a + n);
    long long flag = 0;
    long long numOfNeg = 0, numOfPos = 0, numOfZeros = 0;
    for (long long i = 0; i < n; i++) {
        if (a[i] < 0)
            numOfNeg++;
        else if (a[i] > 0)
            numOfPos++;
        else
            numOfZeros++;
    }

    if (numOfZeros == 0) {
        for (long long i = 0; i < numOfNeg - 1; i++)
            flag += (-1 - a[i]);

        if (numOfNeg > 0) {
            if (numOfNeg % 2 != 0)
                flag += (1 - a[numOfNeg - 1]);
            else
                flag += (-1 - a[numOfNeg - 1]);
        }
        for (long long i = numOfNeg; i < n; i++)
            flag += (a[i] - 1);
    }
    else if (numOfNeg == 0 && numOfPos == 0)
        flag += numOfZeros;
    else {
        for (long long i = 0; i < numOfNeg; i++)
        {
            flag += (-1 - a[i]);
        }

        flag += numOfZeros;

        for (long long i = numOfNeg + numOfZeros; i < n; i++)
            flag += (a[i] - 1);
    }
    cout << flag << endl;
    return 0;
}