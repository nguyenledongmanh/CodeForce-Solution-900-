#include <iostream>
#include <math.h>
using namespace std;

bool checkSquare(double area) {
    if (sqrt(area) - (int)sqrt(area) == 0)
        return true;
    return false;
}

int main() {
    int testcase;
    cin >> testcase;
    while(testcase--) {
        int a1, b1, length1;
        int a2, b2, length2;
        int area1, area2;
        cin >> a1 >> b1;
        a1 > b1 ? length1 = a1 : length1 = b1;
        area1 = a1 * b1;
        cin >> a2 >> b2;
        a2 > b2 ? length2 = a2 : length2 = b2;
        area2 = a2 * b2;
        double SumArea = area1 + area2;
        checkSquare(SumArea) && (length1 == length2) ? cout << "YES" << endl : cout << "NO" << endl;        
    }
    return 0;
}