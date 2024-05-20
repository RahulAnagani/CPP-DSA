#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of the row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << nCr(n - 1, i - 1);
    }
    return 0;
}