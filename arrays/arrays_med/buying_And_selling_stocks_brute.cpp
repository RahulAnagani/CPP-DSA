#include <bits/stdc++.h>
using namespace std;
int best(int a[], int n)
{
    int maxp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int profit = a[j] - a[i];
            maxp = max(maxp, profit);
            // cout<<i<<" "<<j<<" "<<profit<<endl;
        }
    }
    return maxp;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << best(a, n);
    return 0;
}