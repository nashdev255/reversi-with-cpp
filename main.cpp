/**
 * @file main.cpp
 * @author nashdev255
 * @brief size : 8 by 8, make without class this time
 * 
 */
#include <iostream>
#include <vector>

#define BOARD_LENGTH    8

void showBoard(int board[BOARD_LENGTH][BOARD_LENGTH]);

int main() {
    int board[BOARD_LENGTH][BOARD_LENGTH] = { 0 };
    board[3][3] = 1; board[3][4] = 2;
    board[4][3] = 2; board[4][4] = 1;

    showBoard(board);

    return 0;
}

void showBoard(int board[BOARD_LENGTH][BOARD_LENGTH]) {
    for(int i=0;i<BOARD_LENGTH;i++) {
        for(int j=0;j<BOARD_LENGTH;j++) {
            std::cout << board[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
