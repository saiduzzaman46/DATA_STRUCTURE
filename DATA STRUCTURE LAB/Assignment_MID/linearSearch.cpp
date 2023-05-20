#include <iostream>
using namespace std;
int LinearSearching(int arr[], int key, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
      break;
    }
  }
  return -1;
}

int main()
{
  int arr[6] = {5, 4, 2, 8, 3, 1};
  int result = LinearSearching(arr, 8, 6);

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
