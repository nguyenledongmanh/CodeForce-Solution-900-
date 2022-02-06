#include <iostream>
using namespace std;
void swap(long long &a, long long &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(long long A[], long long l, long long h)
{
    long long pivot = A[l];

    long long i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            swap(A[i], A[j]);
        }

    } while (i < j);
    swap(A[j], A[l]);
    return j;
}
void QuickSort(long long A[], long long l, long long h)
{
    long long j;
    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}
void input(long long A[], long long n, long long &flag)
{
    cin >> A[0];
    for (long long i = 1; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == A[i - 1])
            flag++;
    }
}
int main()
{
    long long n; cin >> n;
    long long A[n], flag = 0, sum = 0;
    input(A, n, flag);
    if (flag == n) sum += (n / 2) * (2 * A[0]) * (2 * A[0]);
    else {
        QuickSort(A, 0, n); for (long long i = 0; i < n / 2; i++) sum += (A[i] + A[n - i - 1]) * (A[i] + A[n - i - 1]);
    }
    cout << sum << endl; return 0;
}