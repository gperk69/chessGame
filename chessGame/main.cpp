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
        //std::string startCoordinate;
		char startCoordinate[128];
		std::cin >> startCoordinate;
        //std::getline(std::cin,startCoordinate);
		char buffer[2];
		buffer[1] = '\0';
        //char cx1 = '0' + (startCoordinate[0] - 'a');
        //char cy1 = '7' - (startCoordinate[1] - '1');
		buffer[0] = '0' + (startCoordinate[0] - 'a');
		int x1 = atoi(buffer);
		buffer[0] = '7' - (startCoordinate[1] - '1');
		int y1 = atoi(buffer);
        
        //std::string endCoordinate;
		char endCoordinate[128];
		std::cin >> endCoordinate;
        //std::getline(std::cin,endCoordinate);
        //char x2 = '0' + (endCoordinate[0] - 'a');
        //char y2 = '7' - (endCoordinate[1] - '1');
		buffer[0] = '0' + (endCoordinate[0] - 'a');
		int x2 = atoi(buffer);
		buffer[0] = '7' - (endCoordinate[1] - '1');
		int y2 = atoi(buffer);

		//int x2 = atoi(&endCoordinate[0]);
		//int y2 = atoi(&endCoordinate[1]);
        
		std::cout << x1 << " " << y1 << std::endl;
		std::cout << x2 << " " << y2 << std::endl;
        piece* p = game.getPiece(x1,y1);
        game.movePiece(p,x2,y2);
        game.drawBoard();

    }
}
