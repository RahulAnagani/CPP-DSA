#include <bits/stdc++.h>
using namespace std;
int long0(int a[], int n)
{
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == 0)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }
    return maxi;
}
// 0 1 2 3 4
// 1 -2 -1 -1 2
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << long0(a, n);
    return 0;
}
