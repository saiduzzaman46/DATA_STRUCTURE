#include <iostream>

using namespace std;

void queen_moves(int board[8][8], int row, int col) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < 8; i++) {
        int x = row + dx[i];
        int y = col + dy[i];
        while (x >= 0 && x < 8 && y >= 0 && y < 8) {
            board[x][y] = 1;
            x += dx[i];
            y += dy[i];
        }
    }
}

int main() {
    int board[8][8] = {0};
    queen_moves(board, 3, 4);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == 1) {
                cout << "(" << i << ", " << j << ")\n";
            }
        }
    }
    return 0;
}
