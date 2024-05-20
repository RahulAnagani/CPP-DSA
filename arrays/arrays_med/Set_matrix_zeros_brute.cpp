#include <bits/stdc++.h>
using namespace std;
void print(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void set0(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = -1;
                }
                for (int k = 0; k < m; k++)
                {
                    a[k][j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == -1)
                a[i][j] = 0;
        }
    }
}
int main()
{
    int n, m;
    cin >> m >> n;
    int a[m][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    print(m, n, a);
    set0(m, n, a);
    print(m, n, a);
    return 0;
}