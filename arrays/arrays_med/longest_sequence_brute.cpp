#include <bits/stdc++.h>
using namespace std;
bool find(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return 1;
    }
    return 0;
}
int longest(int a[], int n)
{
    int count = 1, x, mx = 1;
    for (int i = 0; i < n; i++)
    {
        x = a[i];
        while (find(a, n, x + 1))
        {
            count++;
            x = x + 1;
        }
        mx = max(mx, count);
        count = 1;
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << longest(a, n);
    return 0;
}