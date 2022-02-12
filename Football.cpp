#include <iostream>
#include <string>

using namespace std;

bool yesNo(string input) {
    string ones = "1111111";
    string zeros = "0000000";
    for (int i = 0; i < input.length(); i++) {
        if (input.substr(i, 7).compare(ones) == 0 || input.substr(i, 7).compare(zeros) == 0)
            return true;
    }
    return false;
}

int main() {
    string input;
    cin >> input;
    if (input.length() <= 7) {
        cout << "NO";
    }
    else {
        bool check = yesNo(input);
        check ? cout << "YES" : cout << "NO";
    }
    cout << endl;
    return 0;
}