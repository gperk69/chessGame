//
//  gameClassCreator.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include "gameClassCreator.hpp"

game::game(char choice)
{
    if (choice == 'w')
    {
        white = true;
    }
    else
    {
        white = false;
        
    }
}
