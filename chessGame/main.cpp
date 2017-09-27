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
    
    pawn Wpawn1();
    pawn Wpawn2();
    pawn Wpawn3();
    pawn Wpawn4();
    pawn Wpawn5();
    pawn Wpawn6();
    pawn Wpawn7();
    pawn Wpawn8();
    king Wking();
    queen Wqueen();
    q
    pawn BpawnA7();
    pawn BpawnB7();
    pawn BpawnC7();
    pawn BpawnD7();
    pawn BpawnE7();
    pawn BpawnF7();
    pawn BpawnG7();
    pawn BpawnH7();

}
