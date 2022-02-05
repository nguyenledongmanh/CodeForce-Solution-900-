#include <iostream>
#define MAX 500
using namespace std;

void inputSale(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Bubble(int A[], int n)
{
    int i, j;
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int maxPrice(int a[], int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] > 0)
            break;
        sum += a[i];
    }

    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[MAX];
    inputSale(a, n);
    Bubble(a, n);
    int price = maxPrice(a, m);
    cout << -price << endl;
    cout << endl;
    return 0;
}