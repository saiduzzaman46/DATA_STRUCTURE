#include <iostream>
using namespace std;

void BishopMove(int chess[8][8], int row, int col)
{
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
}
void QueenMove(int chess[8][8], int row, int col)
{
    BishopMove(chess, row, col);
    for (int i = row - 1; i >= 0; i--)
    {
        chess[i][col] = 1;
    }
    for (int i = row + 1; i < 8; i++)
    {
        chess[i][col] = 1;
    }
    for (int i = col - 1; i >= 0; i--)
    {
        chess[row][i] = 1;
    }
    for (int i = col + 1; i < 8; i++)
    {
        chess[row][i] = 1;
    }
}
void Display(int chess[8][8])
{
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
void Display2(int chess[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int chess[8][8]={0};
    int row, col, entity;
    cout << "1.Queen\n2.Bishop" << endl;
    cout << "Enter Entity (1 or 2) : ";
    cin >> entity;

    switch (entity)
    {
    case 1:
        cout << "Enter current position (row and column): ";
        cin >> row;
        cin >> col;
        QueenMove(chess, row, col);
        Display(chess);
        Display2(chess);
        break;
    case 2:
        cout << "Enter current position (row and column): ";
        cin >> row;
        cin >> col;
        BishopMove(chess, row, col);
        Display(chess);
        Display2(chess);
        break;
    }
    
    return 0;
}