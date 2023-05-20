#include <iostream>
using namespace std;
int BinarySearch(int arr[], int key, int size)
{
  int low = 0;
  int high = size - 1;
  bool flag = false;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (key == arr[mid])
    {
      return mid;
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
  return -1;
}

int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int result = BinarySearch(arr, 5, 6);

  if (result == -1)
  {
    cout << "Element not found";
  }
  else
  {
    cout << "Element found at index " << result;
  }
  return 0;
}