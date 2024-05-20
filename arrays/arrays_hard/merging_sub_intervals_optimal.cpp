#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge_interval(vector<vector<int>> a)
{
    vector<vector<int>> final;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (!final.empty() && a[i][0] < final.back()[1])
        {
            final.back()[1] = max(a[i][1], final.back()[1]);
        }
        else
        {
            final.push_back(a[i]);
        }
    }
    return final;
}
int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = merge_interval(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans)
    {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}