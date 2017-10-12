#include <iostream>
#include "gameClassCreator.hpp"
#include "pieceClasses.hpp"

Game game;
char boardVisuals[8][8] = {};
piece* board[8][8] = {};


int main()
{
    //initialise game instance + get choice
    game.startGame();
    game.setBoard();
    game.drawBoard();
    
    while(!game.checkmate && !game.stalemate)
    {
        //get co-ordinates
        std::string startCoordinate;
        std::getline(std::cin,startCoordinate);
        char x1 = '0' + (startCoordinate[0] - 'a');
        char y1 = '7' - (startCoordinate[1] - '1');
        
        std::string endCoordinate;
        std::getline(std::cin,endCoordinate);
        char x2 = '0' + (endCoordinate[0] - 'a');
        char y2 = '7' - (endCoordinate[1] - '1');
        

        piece* p = game.getPiece(x1,y1);
        game.movePiece(p,x2,y2);
        game.drawBoard();

    }
}
