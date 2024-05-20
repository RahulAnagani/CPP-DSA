#include <bits/stdc++.h>
using namespace std;
vector<int> finding_intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> final;
    while (i < n)
    {
        if (a[i] == b[j])
        {
            final.emplace_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
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
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> ans = finding_intersection(a, b, n, m);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}