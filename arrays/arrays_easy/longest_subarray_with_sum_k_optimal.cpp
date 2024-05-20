#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int i = 0, j = 0, sum = 0, maxi = 0;
    while (i < n && j < n)
    {
        sum += a[j];
        while (sum > k && i <= j)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
            maxi = max(maxi, j - i + 1);
        j++;
    }
    cout << maxi;
    return 0;
}