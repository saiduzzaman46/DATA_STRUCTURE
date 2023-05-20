#include <iostream>

using namespace std;

void SelectionSort(double a[], int n)
{
    int k;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        double temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}

int main()
{

    double a[7] = {9.33, 7.69, 6.54, 8.44,9.40,6.30, 7.55};
    
    // for(int i=0;i<7;i++){
    //     cout<<a[i]<<" ";
    // }
    

    SelectionSort(a, 7);

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}