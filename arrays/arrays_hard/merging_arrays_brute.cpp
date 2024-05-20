#include <bits/stdc++.h>
using namespace std;
void merge(long long a[], long long b[], int m, int n)
{
    long long c[m + n];
    int i = 0, j = 0;
    int ind = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[ind++] = a[i++];
        }
        else
            c[ind++] = b[j++];
    }
    while (i < m)
    {
        c[ind++] = a[i++];
    }
    while (j < n)
    {
        c[ind++] = b[j++];
    }
    for (int i = 0; i < m + n; i++)
    {
        if (i < m)
        {
            a[i] = c[i];
        }
        else
        {
            b[i - m] = c[i];
        }
    }
}
int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}