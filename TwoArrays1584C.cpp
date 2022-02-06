#include <bits/stdc++.h>

void input(int A[], int n) {
    for (int i = 0; i < n; i++)
        std::cin >> A[i];
}

int main() {
    int testcase;
    std::cin >> testcase;
    while(testcase--) {
        int n;
        std::cin >> n;
        int A[n], B[n];
        input(A, n);
        input(B, n);
        std::sort(A, A + n);
        std::sort(B, B + n);
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == B[i])
                continue;
            if (A[i] != B[i] - 1)
                check = false;
        }

        check ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    }

    return 0;
}