#include <bits/stdc++.h>
using namespace std;
int count(int a[], int n, int k)
{
    int sum = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == k)
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
    cout << count(a, n, k);
    return 0;
}