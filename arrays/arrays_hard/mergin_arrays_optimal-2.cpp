#include <bits/stdc++.h>
using namespace std;
void swp(long long a[], long long b[], int m, int n)
{
    if (a[m] > b[n])
    {
        a[m] = a[m] ^ b[n];
        b[n] = a[m] ^ b[n];
        a[m] = a[m] ^ b[n];
    }
}
// 0 1 2 3 4 0 1 2
// 0 1 2 3 4 5 6 7
void merge(long long a[], long long b[], int m, int n)
{
    int gap = (((m + n) / (2)) + ((m + n) % (2)));
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < (m + n))
        {
            if (left < m && right < m)
            {
                swp(a, a, left, right);
            }
            else if (left < m && right >= m)
            {
                swp(a, b, left, right - m);
            }
            else
            {
                swp(b, b, left - m, right - m);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        gap = ((gap / (2)) + ((gap % 2)));
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