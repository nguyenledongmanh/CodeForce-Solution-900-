#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string input) {
    string reverseStr = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reverseStr += input[i];
    }

    if (reverseStr.compare(input) == 0)
        return true;
    return false;
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        string input;
        cin >> input;
        bool check = checkPalindrome(input);
        if (!check)
            cout << input << endl;
        else {
            int length = input.length();
            check = true;
            string output = "";
            for (int i = 0; i < length - 2; i++) {
                string virtualInput = input;
                // check = checkPalindrome(output);
                output = virtualInput.erase(i, 1) + virtualInput[i];
                check = checkPalindrome(output);
                if (check == false) {
                    break;
                }
            }
            check ? cout << -1 << endl : cout << output << endl;
        }
    }

    return 0;
}