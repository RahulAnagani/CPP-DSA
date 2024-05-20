#include <bits/stdc++.h>
using namespace std;
void reverse(int a[], int i, int j)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // optimal;
    int k;
    cin >> k;
    // for right reverse from k to n and from a to k-1 and from 0 to n;
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);
    reverse(a, 0, n - 1);
    for (auto i : a)
        cout << i << " ";
    return 0;
}
// brute:store d elements in a temp array and shift the elements after d to front and add those at d;