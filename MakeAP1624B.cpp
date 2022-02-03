#include <iostream>
#include <math.h>
using namespace std;

bool checkInteger(long double m)
{
    if (m - (long long)m == 0)
        return true;
    return false;
}

bool findWeightFirstCase(long long a, long long b, long long c)
{
    // ma + c = 2b -> m = (2b - c) / a
    long double m = (long double)(2 * b - c) / a;
    // cout << m << " ";
    if (m > 0 && checkInteger(m))
        return true;
    return false;
}

bool findWeightSecondCase(long long a, long long b, long long c)
{
    // a + c = 2mb -> m = (a + c) / 2b
    long double m = (long double)(a + c) / (2 * b);
    // cout << m << " ";
    if (m > 0 && checkInteger(m))
        return true;
    return false;
}

bool findWeightThirdCase(long long a, long long b, long long c)
{
    // a + mc = 2b -> m = (2b - a) / c
    long double m = (long double)(2 * b - a) / c;
    // cout << m << " ";
    if (m > 0 && checkInteger(m))
        return true;
    return false;
}

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        bool case1 = findWeightFirstCase(a, b, c);
        bool case2 = findWeightSecondCase(a, b, c);
        bool case3 = findWeightThirdCase(a, b, c);

        if(case1 || case2 || case3)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}