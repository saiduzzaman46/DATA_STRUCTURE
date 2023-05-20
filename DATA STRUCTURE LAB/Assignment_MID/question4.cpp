#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    string arr[row][column];

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    string newArr[row * column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j].length() <= 4)
            {
                newArr[count++] = arr[i][j];
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << newArr[i] << " ";
    }
}