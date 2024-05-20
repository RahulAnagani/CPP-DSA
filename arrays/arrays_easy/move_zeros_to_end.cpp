#include <bits/stdc++.h>
using namespace std;
void move_zeros_to_end(int a[], int n)
{
    int i;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            i = j;
            break;
        }
    }
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] != 0)
        {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            i++;
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
    move_zeros_to_end(a, n);
    for (auto i : a)
        cout << i << "  ";
    return 0;
}