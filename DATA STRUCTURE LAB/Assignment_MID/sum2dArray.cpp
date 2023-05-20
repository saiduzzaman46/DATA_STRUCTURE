#include <iostream>
using namespace std;

int main()
{
  int row1, column1;
  cout << "Enter the first arry row number: ";
  cin >> row1;
  cout << "Enter the first arry column number: ";
  cin >> column1;
  int row2, column2;
  cout << "Enter the second array row number: ";
  cin >> row2;
  cout << "Enter the second array column number: ";
  cin >> column2;
  if (row1 != row2 || column1 != column2)
  {
    cout << "Enter same row and column two array " << endl;
  }
  else
  {
    int arr1[row1][column1];
    int arr2[row2][column2];

    cout << "Enter the first array elemrnt : ";
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < column1; j++)
      {
        cin >> arr1[i][j];
      }
    }
    cout << "Enter the second array elemrnt : ";
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < column1; j++)
      {
        cin >> arr2[i][j];
      }
    }
    int result[row1][column1];
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < column1; j++)
      {
        result[i][j] = arr1[i][j] + arr2[i][j];
      }
    }
    cout << "Resultant 2D array: " << endl;
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < column1; j++)
      {
        cout << result[i][j] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}