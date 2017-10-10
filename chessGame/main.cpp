#include <iostream>
#include "gameClassCreator.hpp"
#include "pieceClasses.hpp"

Game game;
char boardDraw[8][8] = {};
piece* board[8][8] = {};


int main()
{
    //initialise game instance + get choice
    game.startGame();
    game.setBoard();
    game.drawBoard();
    
    while(game.checkmate || game.stalemate)
    {
        //get x co-ordinate
        std::string getX;
        std::getline(std::cin,getX);
        char x = getX[0] - 'a';
        
        std::string getY;
        std::getline(std::cin,getY);
        char y = getY[0] - '0';
        
        
        //game.getPiece(x,y);
        game.movePiece(game.WhiteKnights[0],2,4);
        game.drawBoard();

    }
}
