#include <bits/stdc++.h>
using namespace std;
pair<int, int> mr(int a[], int n)
{
    int sum = 0, asum = 0;
    int ssum = 0, assum = 0;
    for (int i = 0; i < n; i++)
    {
        asum += a[i];
        // sum+=(i+1);
        assum = +(a[(i)] * a[(i)]);
    }
    sum = (n * (n + 1)) / 2;
    ssum = (n * (n + 1) * (2 * n + 1)) / 6;
    int eq = sum - asum;
    int eq2 = ssum = assum; // missing^2-rep^2
    eq2 = eq2 / eq;
    return {(eq2 + eq) / 2, (eq2 - eq) / 2};
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "Enter an array of elements containing a missing and a repeating number in the range of 1-N: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pair<int, int> ar = mr(a, n);
    cout << ar.first << " " << ar.second;
    return 0;
}