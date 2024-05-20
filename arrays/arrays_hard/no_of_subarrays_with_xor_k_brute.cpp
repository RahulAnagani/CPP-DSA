#include <bits/stdc++.h>
using namespace std;
int longxor(int a[], int n, int k)
{
    int xr = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        xr = 0;
        for (int j = i; j < n; j++)
        {
            xr = xr ^ a[j];
            if (xr == k)
                c++;
        }
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    cout << longxor(a, n, k);
    return 0;
}