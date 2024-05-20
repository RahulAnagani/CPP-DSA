#include <bits/stdc++.h>
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            std::cout << "not !";
            return 0;
        }
    }
    std::cout << "yup:)";
    return 0;
}