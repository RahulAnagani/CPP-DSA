#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> four(int a[], int n, int t)
{
    vector<vector<int>> final;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && a[j] == a[j - 1])
                continue;
            int k = j + 1, l = n - 1;
            while (k < l)
            {
                if (a[i] + a[j] + a[k] + a[l] == t)
                {
                    final.push_back({a[i], a[j], a[k], a[l]});
                    k++;
                    l--;
                    while (k < l && a[k] == a[k - 1])
                        k++;
                    while (l > k && a[l] == a[l + 1])
                        l--;
                }
                else if (a[i] + a[j] + a[k] + a[l] > t)
                    l--;
                else
                    k++;
            }
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
    vector<vector<int>> ans = four(a, n, t);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}