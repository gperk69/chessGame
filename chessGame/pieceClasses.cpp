//
//  pieceClasses.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include <iostream>

piece::piece(char x, char y, bool white, piece *p, game *Game)
{
	p->posX = x;
	p->posY = y;
	if (white)
	{
		Game->board[x][y] = p->type;
	}
	else
	{
		Game->board[x][y] = p->type - 31;
	}
}
