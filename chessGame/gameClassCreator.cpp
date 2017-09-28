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

void game::setBoard()
{
	static pawn Wpawn1();
    static pawn Wpawn2();
    static pawn Wpawn3();
    static pawn Wpawn4();
    static pawn Wpawn5();
    static pawn Wpawn6();
    static pawn Wpawn7();
    static pawn Wpawn8();
    static king Wking();
    static queen Wqueen();
    static rook Wrook1();
	static rook Wrook2();
	static bishop Wbishop1();
	static bishop Wbishop2();
	static knight Wbnight1();
	static knight Wbnight2();
	
	static pawn Bpawn1();
    static pawn Bpawn2();
    static pawn Bpawn3();
    static pawn Bpawn4();
    static pawn Bpawn5();
    static pawn Bpawn6();
    static pawn Bpawn7();
    static pawn Bpawn8();
    static king Bking();
    static queen Bqueen();
    static rook Brook1();
	static rook Brook2();
	static bishop Bbishop1();
	static bishop Bbishop2();
	static knight Bknight1();
	static knight Bknight2();
	
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
