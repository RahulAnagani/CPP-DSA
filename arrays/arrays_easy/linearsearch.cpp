#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}