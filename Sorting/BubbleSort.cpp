#include <iostream>
using namespace std;

void bubble(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{

    int a[] = {3, 8, 2, 5, 1, 4, 7};
    bubble(a, 7);

    for (int i : a)
        cout << i << " ";
}