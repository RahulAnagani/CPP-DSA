#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(int a[], int n, int k)
{
    vector<vector<int>> final;
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hash;
        for (int j = i + 1; j < n; j++)
        {
            if (hash.find(-(a[i] + a[j])) != hash.end())
            {
                vector<int> temp = {a[i], a[j], -(a[i] + a[j])};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(a[j]);
        }
    }
    final.insert(final.begin(), st.begin(), st.end());
    return final;
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
    vector<vector<int>> ans = sum(a, n, k);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}