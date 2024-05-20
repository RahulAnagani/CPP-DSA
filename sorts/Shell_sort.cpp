#include <bits/stdc++.h>
using namespace std;
void swap(int a[], int i, int j)
{
    if (a[i] > a[j])
    {
        a[i] = a[i] ^ a[j];
        a[j] = a[i] ^ a[j];
        a[i] = a[i] ^ a[j];
    }
}
void shell(int a[], int n)
{
    int gap = (n / 2) + (n % 2);
    int i = 0, j = i + gap;
    while (1)
    {
        i = 0;
        j = i + gap;
        while (j < n)
        {
            swap(a, i, j);
            i++;
            j++;
        }
        if (gap == 1)
            break;
        gap = (gap / 2) + (gap % 2);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    shell(a, n);
    for (auto i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}