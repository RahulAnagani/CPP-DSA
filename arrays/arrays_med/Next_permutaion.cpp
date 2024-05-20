#include <bits/stdc++.h>
using namespace std;
void nxt(int a[], int n)
{
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(a, a + n);
        return;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (a[i] > a[ind])
        {
            swap(a[i], a[ind]);
            break;
        }
    }
    reverse(a + ind + 1, a + n);
}
// 6 3 1 2 3
// 6 3 2 1 3
// 6 3 2 3 1
// 6 3 3 1 2
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    nxt(a, n);
    for (auto i : a)
        cout << i << " ";
    return 0;
}