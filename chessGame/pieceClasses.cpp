//
//  pieceClasses.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include <iostream>
#include "pieceClasses.hpp"

extern char boardVisuals[8][8];
extern piece* board[8][8];

piece::piece(char x, char y, bool white, char t)
{
	posX = x;
	posY = y;
    type = t;
    isWhite = white;
}

char piece::getPosX()
{
    return posX;
}
char piece::getPosY()
{
    return posY;
}
void piece::setPos(char x, char y)
{
    posX = x;
    posY = y;
}

bool king::isValidKingMove(char x, char y, bool white)
{
    if (board[x][y] == nullptr || board[x][y]->isWhite != white)
    {
        if (x == posX && (y == posY+1 || y == posY-1))
        {
            return true;
        }
        if (y == posY && ((x == posX - 1) || (x == posX + 1)))
        {
            return true;
        }
    }
    else
    {
        return false;
    }
    //shouldnt reach here
    return -1;
}
