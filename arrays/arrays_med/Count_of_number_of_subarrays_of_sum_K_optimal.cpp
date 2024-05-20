#include <bits/stdc++.h>
using namespace std;
int count(int a[], int n, int k)
{
    map<int, int> mp;
    mp[0] = 1;
    int sum = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mp.find(sum - k) != mp.end())
            c += mp[sum - k];
        mp[sum]++;
    }
    return c;
}
// 3 -3 1 1 1 0
// 1 0  1
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