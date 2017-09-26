//
//  gameClassCreator.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include "gameClassCreator.hpp"
#include <iostream>
#include <string>



char game::getChoice()
{
    std::string choice;
    std::cout << "B or W?";
    std::getline(std::cin, choice);
    return choice[0];
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
