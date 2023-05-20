#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;
    cout << "Enter size of first matrix(row and column) : ";
    cin >> row1 >> col1;
    int firstMatrix[row1][col1];
    cout << "Enter first matrix element : ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> firstMatrix[i][j];
        }
    }
    cout << "Enter size of second matrix(row and column) : ";
    cin >> row2 >> col2;
    if (col1 == row2)
    {
        int secondMatrix[row2][col2];
        cout << "Enter second matrix element : ";
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cin >> secondMatrix[i][j];
            }
        }

        int mul[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mul[i][j] = 0;

                for (int k = 0; k < row2; k++)
                {
                    mul[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }
        cout << "Output Matrix : " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Your matrix size is not currect please enter write size of matrix" << endl;
    }
}