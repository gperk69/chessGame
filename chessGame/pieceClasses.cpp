//
//  pieceClasses.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include <iostream>
#include "pieceClasses.hpp"


piece::piece(char x, char y, bool white)
{
	posX = x;
	posY = y;
    if (white == false)
    {
        type = 'z';
        std::cout << "cunt";
    }
}
