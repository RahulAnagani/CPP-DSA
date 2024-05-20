#include <bits/stdc++.h>
using namespace std;
int long0(int a[], int n)
{
    map<int, int> mp;
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
            maxi = max(maxi, i + 1);
        else if (mp.find(sum) != mp.end())
        {
            maxi = max(maxi, i - mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return maxi;
}
// 0
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << long0(a, n);
    return 0;
}