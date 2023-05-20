#include <iostream>
using namespace std;
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
            cout <<"Index number : "<< mid << endl;
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
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    BinarySearch(arr,6,10);
    return 0;
}