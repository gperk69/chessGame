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
	static pawn Wpawn1(0,6,1,&Wpawn1,&Game);
    static pawn Wpawn2(1,6,1,&Wpawn2,&Game);
    static pawn Wpawn3(2,6,1,&Wpawn3,&Game);
    static pawn Wpawn4(3,6,1,&Wpawn4,&Game);
    static pawn Wpawn5(4,6,1,&Wpawn5,&Game);
    static pawn Wpawn6(5,6,1,&Wpawn6,&Game);
    static pawn Wpawn7(6,6,1,&Wpawn7,&Game);
    static pawn Wpawn8(7,6,1,&Wpawn8,&Game);
    static king Wking(4,7,1,&Wking,&Game);
    static queen Wqueen(3,7,1,&Wqueen,&Game);
    static rook Wrook1(0,7,1,&Wrook1,&Game);
	static rook Wrook2(7,7,1,&Wrook2,&Game);
	static bishop Wbishop1(2,7,1,&Wbishop1,&Game);
	static bishop Wbishop2(5,7,1,&Wbishop2,&Game);
	static knight Wbknight1(1,7,1,&Wbknight1,&Game);
	static knight Wbknight2(6,7,1,&Wbknight2,&Game);
	
	static pawn Bpawn1(0,1,0,&Bpawn1,&Game);
    static pawn Bpawn2(1,1,0,&Bpawn2,&Game);
    static pawn Bpawn3(2,1,0,&Bpawn3,&Game);
    static pawn Bpawn4(3,1,0,&Bpawn4,&Game);
    static pawn Bpawn5(4,1,0,&Bpawn5,&Game);
    static pawn Bpawn6(5,1,0,&Bpawn6,&Game);
    static pawn Bpawn7(6,1,0,&Bpawn7,&Game);
    static pawn Bpawn8(7,1,0,&Bpawn8,&Game);
    static king Bking(4,0,0,&Bking,&Game);
    static queen Bqueen(3,0,0,&Bqueen,&Game);
    static rook Brook1(0,0,0,&Brook1,&Game);
	static rook Brook2(7,0,0,&Brook2,&Game);
	static bishop Bbishop1(2,0,0,&Bbishop1,&Game);
	static bishop Bbishop2(5,0,0,&Bbishop2,&Game);
	static knight Bknight1(1,0,0,&Bknight1,&Game);
	static knight Bknight2(6,0,0,&Bknight2,&Game);
	
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
