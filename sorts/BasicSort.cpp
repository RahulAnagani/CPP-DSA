#include <iostream>
using namespace std;
void swap(int a[], int k, int b)
{
    if (a[k] != a[b])
    {
        a[k] = a[k] ^ a[b];
        a[b] = a[k] ^ a[b];
        a[k] = a[k] ^ a[b];
    }
}
void selectiveSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
            if (a[j] < a[min])
                min = j;
        swap(a, i, min);
    }
}
void bubbleSort(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
            if (a[j] > a[j + 1])
                swap(a, j, j + 1);
    }
}
void insertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            swap(a, j, j - 1);
            j--;
        }
    }
}
void recursiveSelectionSort(int a[], int i, int n)
{
    if (i == n)
        return;
    int min = i;
    for (int j = i; j < n; j++)
        if (a[min] > a[j])
            min = j;
    swap(a, i, min);
    recursiveSelectionSort(a, i + 1, n);
}
void recursiveBubbleSort(int a[], int i, int n)
{
    if (i < 0)
        return;
    for (int j = 0; j <= i; j++)
        if (a[j] > a[j + 1])
            swap(a, j, j + 1);
    recursiveBubbleSort(a, i - 1, n);
}
void recursiveInsertionSort(int a[], int i, int n)
{
    if (i == n)
        return;
    int j = i;
    while (j > 0 && a[j] < a[j - 1])
    {
        swap(a, j, j - 1);
        j--;
    }
    recursiveInsertionSort(a, i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // selectiveSort(a,n);
    // bubbleSort(a,n);
    // insertionSort(a,n);
    // recursiveSelectionSort(a,0,n);
    // recursiveBubbleSort(a,n-2,n);
    // recursiveInsertionSort(a,0,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
// 5 1 2 4 3