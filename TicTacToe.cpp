#include <iostream>
#include <string>
#define ROW 3
#define COL 3

void createBoard(std::string gameBoard[ROW][COL]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            gameBoard[i][j] = "";
        }
    }
}

void displayBoard(std::string gameBoard[ROW][COL]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            std::cout << gameBoard[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void getPlayerChoice(int arr[]){
    int row, col;
    std::cout << "Please enter row: ";
    std::cin >> row;
    std::cout<< "Please enter col: ";
    std::cin >> col;
    arr[0] = row;
    arr[1] = col;
}


int main(){
    int choice[2];
    std::string board[ROW][COL];
    createBoard(board);
    return 0;
}