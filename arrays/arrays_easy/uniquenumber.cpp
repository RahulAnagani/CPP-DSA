#include <bits/stdc++.h>
using namespace std;
int find_unique(int a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
        x ^= a[i];
    return x;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << find_unique(a, n);
}