#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x;
        cin >> x;

        if (x <= 9)
        {
            cout << x << endl;
        }
        else if (46 <= x && x <= 50) {
            cout << -1 << endl;
        }
        else
        {
            int start = 9;
            string result = "";
            while (x > start) {
                result = to_string(start) + result;
                x -= start--;
                while (x >= 10) {
                    result = to_string(start) + result;
                    x -= start--;
                }
            }
            result = to_string(x) + result;
            cout << result << endl;
        }
    }
    return 0;
}