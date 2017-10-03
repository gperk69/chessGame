//
//  gameClassCreator.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include <iostream>
#include <string>
#include "gameClassCreator.hpp"
#include "pieceClasses.hpp"


char game::getChoice()
{
    std::string choice;
    std::cout << "B or W?";
    std::getline(std::cin, choice);
    return choice[0];
}

void game::setBoard()
{
	for (int i = 0; i < 8; ++i)
	{
		WhitePawns[i] = new pawn(i, 6, nullptr, this);
	}
	
}

void game::drawBoard()
{
    board[Wpawn1.posX][Wpawn1.posY] = Wpawn1.type;
    
}


void game::processChoice(char choice)
{
    if (choice == 'w' || choice == 'W')
    {
        white = true;
        picked = true;
    }
    else if (choice == 'b' || choice == 'B')
    {
        white = false;
        picked = true;
    }
}
