#include <iostream>
#include <string>

//Define chessboard dimensions
#define ROWS 8
#define COLS 8

//Define Piece Types
#define PAWN 1
#define ROOK 2
#define KNIGHT 3
#define BISHOP 4
#define QUEEN 5
#define KING 6

//Define colors for output
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

//Function to check if the entered position is valid
bool isValidPosition(int x, int y){
    if (x < 0 || x >= ROWS || y < 0 || y >= COLS)
        return false;
    return true;
}

//Function to print the board
void printBoard(int board[ROWS][COLS]){
    std::cout << BLUE << "   0  1  2  3  4  5  6  7" << RESET << std::endl;
    for (int i = 0; i < ROWS; i++){
        std::cout << BLUE << i << RESET;
        for (int j = 0; j < COLS; j++){
            if (board[i][j] == 0)
                std::cout << " " << i << j << RESET;
            else if (board[i][j] > 0 && board[i][j] <= 6)
                std::cout << " " << BLACK