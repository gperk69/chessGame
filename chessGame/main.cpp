#include <iostream>
#include "gameClassCreator.hpp"
#include "pieceClasses.hpp"

Game game;
char board[8][8] = {};

int main()
{
    //initialise game instance + get choice
    game.startGame();
    game.setBoard();
    game.drawBoard();
}
