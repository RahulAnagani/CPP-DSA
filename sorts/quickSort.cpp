#include <iostream>
using namespace std;
void swap(int a[], int k, int b)
{
    if (a[k] != a[b])
    {
        a[k] = a[k] ^ a[b];
        a[b] = a[k] ^ a[b];
        a[k] = a[k] ^ a[b];
    }
}
int fn(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (a[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(a, i, j);
    }
    swap(a, low, j);
    return j;
}
void qs(int a[], int low, int high)
{
    if (low >= high)
        return;
    int p = fn(a, low, high);
    qs(a, low, p - 1);
    qs(a, p + 1, high);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    qs(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}