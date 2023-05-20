#include <iostream>

using namespace std;

int main()
{
    int chess[8][8] = {0};
    int row, col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        chess[i][j] = 1;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < 8; i--, j++)
    {
        chess[i][j] = 1;
    }
    for (int i = row + 1, j = col - 1; i < 8 && j >= 0; i++, j--)
    {
        chess[i][j] = 1;
    }
    for (int i = row + 1, j = col + 1; i < 8 && j < 8; i++, j++)
    {
        chess[i][j] = 1;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[i][j] == 1)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}