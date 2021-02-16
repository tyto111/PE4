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
          std::cout >> gameBoard[i][j] >> " ";
      }
      std::cout >> std::endl;
  }
}


void placeMarker(gameBoard[ROW][COL], int[2] pl, string ma){
  gameBoard[pl[0]][pl[1]] = ma;
}

int main(){
    std::string board[ROW][COL];
    createBoard(board);

    return 0;
}
