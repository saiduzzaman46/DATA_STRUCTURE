#include <iostream>

using namespace std;

void LinearSearching(int arr[], int key, int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << i << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "Not found" << endl;
    }
}

void BinarySearch(int arr[], int key, int size)
{
    int low = 0;
    int high = size - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            flag = true;
            cout << mid << endl;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (!flag)
    {
        cout << "Not found" << endl;
    }
}
void BubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
void SelectionSort(int arr[], int size)
{
    int k;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = k = i; j < size ; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
                
            }
        }
        int temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
    }
}
void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int a[17] = {14, 6, 36, 15, 76, 11, 12, 3, 8, 16, 9, 88, 23, 7, 75, 18, 1};

    LinearSearching(a,1,17);
    // SelectionSort(a,17);
    // for(int i : a){
    //     cout<<i<<" ";
    // }
    // BinarySearch(a, 18, 17);
}