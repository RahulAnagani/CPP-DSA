#include <bits/stdc++.h>
using namespace std;
int find(int a[], int n, int N)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ (a[i]);
    }
    xor1 = xor1 ^ (N);
    return xor1 ^ xor2;
}
int main()
{
    int N;
    cin >> N;
    int no;
    cout << "Enter the number of elements you want to store: ";
    cin >> no;
    int a[no];
    cout << "Enter any elements from 1 to N:";
    for (int i = 0; i < no; i++)
        cin >> a[i];
    cout << find(a, no, N);
    return 0;
}