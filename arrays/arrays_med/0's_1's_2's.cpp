#include <bits/stdc++.h>
using namespace std;
// brute-sort the array.
// better-count the no of 0's;1's;2's and create a temp array and return that array.
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void move(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a, mid, low);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a, mid, high);
            high--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    move(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}