//
//  pieceClasses.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include "pieceClasses.hpp"
#include <iostream>

piece::piece(char x, char y, bool white)
{
	piece.posX = x;
	piece.posY = y;
	if (white)
	{
		board[x][y] = piece.type;
	}
	else
	{
		board[x][y] = piece.type - 31;
	}
}