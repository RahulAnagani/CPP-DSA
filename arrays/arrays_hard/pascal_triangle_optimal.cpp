#include <bits/stdc++.h>
using namespace std;
vector<int> row(int n)
{
    int ans = 1;
    vector<int> final;
    final.push_back(ans);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans /= i;
        final.push_back(ans);
    }
    return final;
}
int main()
{
    int n;
    cout << "Enter the total rows of the triangle: ";
    cin >> n;
    vector<vector<int>> ans(n);
    for (int i = 1; i <= n; i++)
    {
        ans[i - 1] = row(i);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// 0 1 2 3
// 1 3 3 1
// 3 4-2*3