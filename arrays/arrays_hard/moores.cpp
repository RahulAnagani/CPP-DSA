#include <bits/stdc++.h>
using namespace std;
vector<int> maj(int a[], int n)
{
    vector<int> final;
    int ele1, ele2;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0)
        {
            ele1 = a[i];
            cnt1++;
        }
        else if (cnt2 == 0)
        {
            ele2 = a[i];
            cnt2++;
        }
        else if (ele1 == a[i])
            cnt1++;
        else if (ele2 == a[i])
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ele1)
            cnt1++;
        if (a[i] == ele2)
            cnt2++;
    }
    if (cnt1 > n / 3)
        final.push_back(ele1);
    if (cnt2 > n / 3)
        final.push_back(ele2);
    return final;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ans = maj(a, n);
    // cout<<ans.size();
    for (auto i : ans)
        cout << i << " ";
    return 0;
}