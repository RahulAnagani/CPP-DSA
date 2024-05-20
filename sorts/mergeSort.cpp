#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int d[high - low + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (a[i] >= a[j])
        {
            d[k] = a[j];
            j++;
            k++;
        }
        else
        {
            d[k] = a[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        d[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        d[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = d[i - low];
    }
}
void ms(int a[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    ms(a, low, mid);
    ms(a, mid + 1, high);
    merge(a, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ms(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}