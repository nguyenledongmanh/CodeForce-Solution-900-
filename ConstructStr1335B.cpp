#include <iostream>
#include <string>

using namespace std;

int main() {
    string sample = "abcdefghijklmnopqrstuvwxyz";
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n, a, b;
        cin >> n >> a >> b;

        string sliceSample = sample.substr(0, b);
        string result = "";

        while (result.length() < n) {
            result += sliceSample;
        }
        result = result.substr(0, n);
        cout << result << endl;
    }

    return 0;
}