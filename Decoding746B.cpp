#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string encoded;
    cin >> n >> encoded;
    string decoding = "";
    int length = encoded.length();
    for (int i = 0; i < n; i++) {
        string subEncoded = encoded.substr(i, n);
        if (subEncoded.length() % 2 == 0)
            decoding = subEncoded.substr(0, 1) + decoding;
        else
            decoding += subEncoded.substr(0, 1);
    }

    cout << decoding << endl;
    return 0;
}