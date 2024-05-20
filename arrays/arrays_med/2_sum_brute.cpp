#include <bits/stdc++.h>
using namespace std;
pair<int, int> twosum(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] + a[j] == k)
                return {i, j};
        }
    }
    return {-1, -1};
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
    pair<int, int> ans = twosum(a, n, k);
    cout << ans.first << " " << ans.second;
    return 0;
}