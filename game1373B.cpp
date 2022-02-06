#include <iostream>
#include <string>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        string input;
        cin >> input;
        int flagZero = 0;
        int flagOne = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '0')
                flagZero++;
            else if (input[i] == '1')
                flagOne++;
        }

        if (flagOne == 0 || flagZero == 0)
            cout << "NET" << endl;
        else {
            int couple = flagOne < flagZero ? flagOne : flagZero;

            if (couple % 2 == 0)
                cout << "NET" << endl;
            else
                cout << "DA" << endl;
        }
    }
    return 0;
}