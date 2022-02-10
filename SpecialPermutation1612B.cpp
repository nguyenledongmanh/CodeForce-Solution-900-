#include <iostream>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int A[n]{0};
        int B[n + 1]{0};
        if (b <= n / 2 && a < b)
            cout << -1;
        else
        {
            if (b < n / 2)
            {
                cout << -1;
            }
            else
            {
                int leftIdx = 1;
                int rightIdx = n / 2 + 1;
                bool check = true;
                A[0] = a;
                A[n / 2] = b;
                B[A[0]]++;
                B[A[n / 2]]++;

                for (int i = 1; i <= b; i++)
                {
                    if (rightIdx >= n)
                        break;

                    if (B[i] == 0)
                    {
                        A[rightIdx++] = i;
                        B[i]++;
                    }
                }

                for (int i = a; i <= n; i++)
                {
                    if (leftIdx > rightIdx)
                        break;
                    if (B[i] == 0)
                    {
                        A[leftIdx++] = i;
                        B[i]++;
                    }
                }

                for (int i = 1; i <= n; i++)
                {
                    if (B[i] == 0)
                    {
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    for (int i = 0; i < n; i++)
                    {
                        cout << A[i] << " ";
                    }
                }
                else
                    cout << -1;
            }
        }
        cout << endl;
    }
    return 0;
}