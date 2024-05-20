#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> four(int a[], int n, int t)
{
    set<vector<int>> st;
    vector<vector<int>> final;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (a[i] + a[j] + a[k] + a[l] == t)
                    {
                        vector<int> temp = {a[i], a[j], a[k], a[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
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
    for (auto j : ans)
    {
        for (auto i : j)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}