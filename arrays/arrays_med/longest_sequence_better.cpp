#include <bits/stdc++.h>
using namespace std;
int longest(int a[], int n)
{
    sort(a, a + n);
    int len = 1, mx = a[0], maxi = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == mx)
        {
            len++;
            mx = a[i];
        }
        else if (a[i] > mx)
        {
            len = 1;
            mx = a[i];
        }
        maxi = max(maxi, len);
    }
    return maxi;
} // 1 1 2 3 3 30
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