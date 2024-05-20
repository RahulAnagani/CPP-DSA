#include <bits/stdc++.h>
using namespace std;
void alternate(vector<int> &a, int n)
{
    vector<int> pos;
    vector<int> neg;
    for (auto i : a)
    {
        if (i >= 0)
            pos.emplace_back(i);
        else
            neg.emplace_back(i);
    }
    // 1 4 5 2 3
    //-1 -2
    if (pos.size() >= neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int ind = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            a[ind] = pos[i];
            ind++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int ind = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[ind] = neg[i];
            ind++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    alternate(a, n);
    for (auto i : a)
        cout << i << " ";
    return 0;
}