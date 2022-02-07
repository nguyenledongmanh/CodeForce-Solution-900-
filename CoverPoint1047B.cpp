#include <bits/stdc++.h>
using namespace std;
// y = -x + c -> c = y + x = MAX + y_cor => c is min
int main() {
    long long n;
    cin >> n;
    vector <long long> storeVertical;
    long long MAX_xcor = 0, MAX_ycor = 0;
    while(n--) {
        long long x, y;
        cin >> x >> y;
        storeVertical.push_back(x + y);
    }
    cout << *max_element(storeVertical.begin(), storeVertical.end()) << endl;
    return 0;
}