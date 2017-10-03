//
//  gameClassCreator.hpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#ifndef gameClassCreator_hpp
#define gameClassCreator_hpp

#include <stdio.h>

//information needed for a game
struct game
{
    char board[8][8] = {};
    void setBoard();
    void drawBoard();

    
    char getChoice();
	void checkLegal();
	bool check();
	bool checkmate();
    bool stalemate();
	
    
    
    
    void processChoice(char);
    bool picked = false;
    bool white;


	pawn* WhitePawns[8];
	pawn Wpawn1(0, 6, 1, &Wpawn1, &Game);
	pawn Wpawn2(1, 6, 1, &Wpawn2, &Game);
	pawn Wpawn3(2, 6, 1, &Wpawn3, &Game);
	static pawn Wpawn4(3, 6, 1, &Wpawn4, &Game);
	static pawn Wpawn5(4, 6, 1, &Wpawn5, &Game);
	static pawn Wpawn6(5, 6, 1, &Wpawn6, &Game);
	static pawn Wpawn7(6, 6, 1, &Wpawn7, &Game);
	static pawn Wpawn8(7, 6, 1, &Wpawn8, &Game);
	static king Wking(4, 7, 1, &Wking, &Game);
	static queen Wqueen(3, 7, 1, &Wqueen, &Game);
	static rook Wrook1(0, 7, 1, &Wrook1, &Game);
	static rook Wrook2(7, 7, 1, &Wrook2, &Game);
	static bishop Wbishop1(2, 7, 1, &Wbishop1, &Game);
	static bishop Wbishop2(5, 7, 1, &Wbishop2, &Game);
	static knight Wbknight1(1, 7, 1, &Wbknight1, &Game);
	static knight Wbknight2(6, 7, 1, &Wbknight2, &Game);

	static pawn Bpawn1(0, 1, 0, &Bpawn1, &Game);
	static pawn Bpawn2(1, 1, 0, &Bpawn2, &Game);
	static pawn Bpawn3(2, 1, 0, &Bpawn3, &Game);
	static pawn Bpawn4(3, 1, 0, &Bpawn4, &Game);
	static pawn Bpawn5(4, 1, 0, &Bpawn5, &Game);
	static pawn Bpawn6(5, 1, 0, &Bpawn6, &Game);
	static pawn Bpawn7(6, 1, 0, &Bpawn7, &Game);
	static pawn Bpawn8(7, 1, 0, &Bpawn8, &Game);
	static king Bking(4, 0, 0, &Bking, &Game);
	static queen Bqueen(3, 0, 0, &Bqueen, &Game);
	static rook Brook1(0, 0, 0, &Brook1, &Game);
	static rook Brook2(7, 0, 0, &Brook2, &Game);
	static bishop Bbishop1(2, 0, 0, &Bbishop1, &Game);
	static bishop Bbishop2(5, 0, 0, &Bbishop2, &Game);
	static knight Bknight1(1, 0, 0, &Bknight1, &Game);
	static knight Bknight2(6, 0, 0, &Bknight2, &Game);
    
};






#endif /* gameClassCreator_hpp */
