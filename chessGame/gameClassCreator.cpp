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
	static pawn Wpawn1(0,6,1);
    static pawn Wpawn2(1,6,1);
    static pawn Wpawn3(2,6,1);
    static pawn Wpawn4(3,6,1);
    static pawn Wpawn5(4,6,1);
    static pawn Wpawn6(5,6,1);
    static pawn Wpawn7(6,6,1);
    static pawn Wpawn8(7,6,1);
    static king Wking(4,7,1);
    static queen Wqueen(3,7,1);
    static rook Wrook1(0,7,1);
	static rook Wrook2(7,7,1);
	static bishop Wbishop1(2,7,1);
	static bishop Wbishop2(5,7,1);
	static knight Wbknight1(1,7,1);
	static knight Wbknight2(6,7,1);
	
	static pawn Bpawn1(0,1,0);
    static pawn Bpawn2(1,1,0);
    static pawn Bpawn3(2,1,0);
    static pawn Bpawn4(3,1,0);
    static pawn Bpawn5(4,1,0);
    static pawn Bpawn6(5,1,0);
    static pawn Bpawn7(6,1,0);
    static pawn Bpawn8(7,1,0);
    static king Bking(4,0,0);
    static queen Bqueen(3,0,0);
    static rook Brook1(0,);
	static rook Brook2();
	static bishop Bbishop1();
	static bishop Bbishop2();
	static knight Bknight1();
	static knight Bknight2();
	
}

void game::drawBoard()
{
	board[8][8] = {};
	

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
