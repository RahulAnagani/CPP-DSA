#include <bits/stdc++.h>
using namespace std;
void merge(long long a[], long long b[], int m, int n)
{
    int i = m - 1, j = 0;
    while (i >= 0 && j < n)
    {
        if (b[j] < a[i])
        {
            swap(a[i], b[j]);
        }
        i--;
        j++;
    }
    sort(a, a + m);
    sort(b, b + n);
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