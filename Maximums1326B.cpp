#include <iostream>
#include <vector>
using namespace std;

void inputArray(long long *b, long long n) {
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}

int main() {
    long long n;
    cin >> n;
    vector <long long> a, x;
    long long MAX;
    long long *b = new long long[n];
    inputArray(b, n);
    x.push_back(0);
    a.push_back(b[0]);
    MAX = a[0];
    for (int i = 1; i < n; i++) {
        x.push_back(MAX);
        long long add = x[i] + b[i];
        a.push_back(add);
        if (add >= MAX)
            MAX = add;
    }

    for (auto item:a) {
        cout << item << " ";
    }
    delete[] b;
    cout << endl;
    return 0;
}