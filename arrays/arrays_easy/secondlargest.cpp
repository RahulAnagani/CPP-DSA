#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = a[0];
    int sl = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if (l > a[i] && a[i] > sl)
        {
            sl = a[i];
        }
    }
    cout << sl;
    return 0;
}