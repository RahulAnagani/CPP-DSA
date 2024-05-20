#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> four(int a[], int n, int t)
{
    set<vector<int>> st;
    vector<vector<int>> final;
    for (int i = 0; i < n; i++)
    {
        set<int> hash;
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (hash.find(t - (a[i] + a[j] + a[k])) != hash.end())
                {
                    vector<int> temp = {a[i], a[j], a[k], t - (a[i] + a[j] + a[k])};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash.insert(a[k]);
            }
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
    vector<vector<int>> ans = four(a, n, k);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}