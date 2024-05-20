#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i);
        ans /= (i + 1);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the total rows of the triangle: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << nCr(i - 1, j - 1) << " ";
        }
        cout << "\n";
    }
    return 0;
}