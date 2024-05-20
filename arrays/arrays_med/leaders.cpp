#include <bits/stdc++.h>
using namespace std;
vector<int> leader(int a[], int n)
{
    int mx = a[n - 1];
    vector<int> temp;
    temp.emplace_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > mx)
        {
            temp.push_back(a[i]);
            mx = a[i];
        }
    }
    return temp;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> lead = leader(a, n);
    for (auto i : lead)
        cout << i << " ";
    return 0;
}