#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> three(int a[], int n, int t)
{
    sort(a, a + n);
    vector<vector<int>> final;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (a[i] + a[j] + a[k] == t)
            {
                final.push_back({a[i], a[j], a[k]});
                k--;
                j++;
                while (j < k && a[j] == a[j - 1])
                    j++;
                while (k > j && a[k] == a[k + 1])
                    k--;
            }
            else if (a[i] + a[j] + a[k] > t)
                k--;
            else
                j++;
        }
    }
    return final;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int t;
    cin >> t;
    vector<vector<int>> ans = three(a, n, t);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}