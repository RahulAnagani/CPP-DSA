#include <bits/stdc++.h>
using namespace std;
int remove_dup(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            a[++i] = a[j];
        }
    }
    return i + 1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "Enter elements containing duplicates in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < remove_dup(a, n); i++)
        cout << a[i];
    return 0;
}
// 1 2 2 3 4 5