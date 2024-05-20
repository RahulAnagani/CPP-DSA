#include <bits/stdc++.h>
using namespace std;
int longest(int a[], int n)
{
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(a[i]);
    int len = 1, maxi = 1;
    for (auto i : st)
    {
        if (st.find(i - 1) == st.end())
        {
            int x = i;
            len = 1;
            x = x + 1;
            while (st.find(x) != st.end())
            {
                len++;
                x++;
            }
        }
        maxi = max(maxi, len);
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << longest(a, n);
    return 0;
}