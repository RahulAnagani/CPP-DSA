#include <bits/stdc++.h>
using namespace std;
vector<int> find_union(int a[], int b[], int n, int m)
{
    vector<int> uni;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (uni.size() == 0 || uni.back() != a[i])
                uni.emplace_back(a[i]);
            i++;
        }
        else
        {
            if (uni.size() == 0 || uni.back() != b[j])
                uni.emplace_back(b[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (a[i] != uni.back())
            uni.emplace_back(a[i]);
        i++;
    }
    while (j < m)
    {
        if (b[j] != uni.back())
            uni.emplace_back(b[j]);
        j++;
    }
    return uni;
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
    vector<int> ans = find_union(a, b, n, m);
    for (auto i : ans)
        cout << i << " ";
}