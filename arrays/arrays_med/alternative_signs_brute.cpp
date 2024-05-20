#include <bits/stdc++.h>
using namespace std;
void alternate(int a[], int n)
{
    int p[n / 2];
    int ne[n / 2];
    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if (a[k] >= 0)
        {
            p[i] = a[k];
            i++;
        }
        else
        {
            ne[j] = a[k];
            j++;
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        a[2 * i] = p[i];
        a[2 * i + 1] = ne[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    alternate(a, n);
    for (auto i : a)
        cout << i << " ";
    return 0;
}