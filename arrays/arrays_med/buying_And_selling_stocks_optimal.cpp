#include <bits/stdc++.h>
using namespace std;
// search for the minimum buying day for the maximum selling
int bestday(int a[], int n)
{
    int mi = a[0];
    int maxp = 0;
    for (int i = 1; i < n; i++)
    {
        int profit = a[i] - mi;
        maxp = max(maxp, profit);
        mi = min(mi, a[i]);
    }
    return maxp;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << bestday(a, n);
    return 0;
}