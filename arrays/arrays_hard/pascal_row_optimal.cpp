#include <bits/stdc++.h>
using namespace std;
vector<int> row(int n)
{
    vector<int> final;
    int ans = 1;
    final.push_back(ans);
    for (int i = 1; i < n; i++)
    {
        ans *= (n - i);
        ans /= i;
        final.push_back(ans);
    }
    return final;
}
int main()
{
    int n;
    cout << "Enter the no of row: ";
    cin >> n;
    vector<int> ans = row(n);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}