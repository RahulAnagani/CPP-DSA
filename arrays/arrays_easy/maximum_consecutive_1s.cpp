#include <bits/stdc++.h>
using namespace std;
int max_ones(int a[], int n)
{
    int c = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            c++;
        else
            c = 0;
        maxi = max(maxi, c);
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << max_ones(a, n);
    return 0;
}