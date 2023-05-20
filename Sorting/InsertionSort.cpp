#include <iostream>
using namespace std;

void Insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{

    int a[7] = {3, 8, 2, 5, 1, 4, 7};

    Insertion(a, 7);

    for (int i : a)
    {
        cout << i << " ";
    }
}