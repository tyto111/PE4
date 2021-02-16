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



void placeMarker(std::string gameBoard[ROW][COL], int pl[2], std::string ma){
  gameBoard[pl[0]][pl[1]] = ma;
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
    for (int i = 0; i < 9; i++){
        displayBoard(board);
        getPlayerChoice(choice);
        if (i % 2 ==0 ){
            placeMarker(board, choice,  "X");
        }
        else{
            placeMarker(board, choice, "O");
        }
        
    }
    return 0;
}