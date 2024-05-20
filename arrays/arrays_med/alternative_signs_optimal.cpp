#include <bits/stdc++.h>
using namespace std;
vector<int> alternate(vector<int> a, int n)
{
    int pos = 0, neg = 1;
    vector<int> final(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            final[pos] = a[i];
            pos += 2;
        }
        else
        {
            final[neg] = a[i];
            neg += 2;
        }
    }
    return final;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ans = alternate(a, n);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}