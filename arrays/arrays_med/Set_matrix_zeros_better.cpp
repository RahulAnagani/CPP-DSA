#include <bits/stdc++.h>
using namespace std;
void set0(int a[][10], int m, int n)
{
    int row[m] = {0};
    int col[n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] || col[j])
                a[i][j] = 0;
        }
    }
}
/*
    0 1 1

1    1 0 1
0    1 1 1
1    1 1 0
*/
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    set0(a, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}