#include <iostream>
#define MAX_VAL 5000
using namespace std;

void inputArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
}

bool checkSorted(int A[], int n) {
    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] <= A[i + 1])
            flag++;
    }

    if (flag == n - 1)
        return true;
    return false;
}

int findMax(int A[], int n) {
    int MAX = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] >= MAX)
            MAX = A[i];
    }

    return MAX;
}

int findMin(int A[], int n) {
    int MIN = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] <= MIN)
            MIN = A[i];
    }
    
    return MIN;
}

int main() {
    int testcase;
    cin >> testcase;

    while(testcase--) {
        int flag;
        int n;
        int A[MAX_VAL];
        cin >> n;
        inputArray(A, n);
        bool check = checkSorted(A, n);
        if (check)
            flag = 0;
        else {
            int max_val = findMax(A, n);
            int min_val = findMin(A, n);
            if (min_val == A[0] && max_val == A[n - 1] || min_val == A[0] || max_val == A[n - 1])
                flag = 1;
            else if (max_val == A[0] && min_val == A[n - 1])
                flag = 3;
            else
                flag = 2;            
        }

        cout << flag << endl;
    }

    return 0;
}