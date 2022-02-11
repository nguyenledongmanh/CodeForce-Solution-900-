#include <iostream>

using namespace std;

void input(long long c[], long long a[]) {
    for (int i = 0; i < 3; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
}

bool Solve(long long FirstContainer, long long SecondContainer, long long ThirdContainer, long long a[]) {
    if (FirstContainer < 0 || SecondContainer < 0 || ThirdContainer < 0)
        return false;
    if (a[3] > FirstContainer + ThirdContainer)
        return false;
    else {
        if (FirstContainer < a[3]) {
            a[3] -= FirstContainer;
            ThirdContainer -= a[3];
        }
    }
    if (a[4] > SecondContainer + ThirdContainer)
        return false;

    return true;
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        long long c[3], a[5];
        input(c, a);

        long long FirstContainer = c[0] - a[0];
        long long SecondContainer = c[1] - a[1];
        long long ThirdContainer = c[2] - a[2];
        bool check = Solve(FirstContainer, SecondContainer, ThirdContainer, a);
        check ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
    