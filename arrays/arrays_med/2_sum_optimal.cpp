#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int k;
    cin >> k;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (a[i].first + a[j].first == k)
        {
            cout << a[i].second << " " << a[j].second;
            break;
        }
        else if (a[i].first + a[j].first > k)
            j--;
        else
            i++;
    }
    return 0;
}