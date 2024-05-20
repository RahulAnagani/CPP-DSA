#include <bits/stdc++.h>
using namespace std;
pair<int, int> twosum(int a[], int n, int k)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(k - a[i]) != mp.end())
            return {mp[k - a[i]], i};
        mp[a[i]] = i;
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