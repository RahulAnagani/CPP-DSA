#include <bits/stdc++.h>
using namespace std;
int longxor(int a[], int n, int k)
{
    int xr = 0;
    map<int, int> mp;
    mp[0] = 1;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ a[i];
        if (mp.find(xr ^ k) != mp.end())
        {
            c += mp[xr ^ k];
        }
        mp[xr]++;
    }
    return c;
}
// 4 5 6 0 6 4
// 4 4^5 4^5^6
// x       k = xor
//  x=xor^k
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    cout << longxor(a, n, k);
    return 0;
}