#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(int a[], int t, int n)
{
    vector<vector<int>> final;
    int sum = 0;
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if (sum == t)
                {
                    vector<int> temp = {a[i], a[j], a[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
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
    vector<vector<int>> final = sum(a, k, n);
    for (auto i : final)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}