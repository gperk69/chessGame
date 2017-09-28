//
//  main.cpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#include <iostream>
#include "pieceClasses.hpp"
#include "gameClassCreator.hpp"


int main()
{
    game Game;
    
    while(Game.picked == false)
    {
        char choice = Game.getChoice();
        Game.processChoice(choice);
    }
}
