// brute-iterate to every subarray and find if its sum eaqual to k if yea calculate its length and find maximum length
#include <bits/stdc++.h>
using namespace std;
// *****//better*****//
int lng_sub(int a[], int n, int k)
{
    map<long long, int> mp;
    long long sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
            maxi = max(maxi, i + 1);
        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            maxi = max(maxi, i - mp[(rem)]);
        }
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    return maxi;
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
    cout << lng_sub(a, n, k);
    return 0;
}