#ifndef gameClassCreator_hpp
#define gameClassCreator_hpp

#include <stdio.h>
#include "pieceClasses.hpp"




//information needed for a game to happen
struct Game
{
    //pre-game function calls to start game note that drawBoard called every time a piece moves
    void startGame();
    char getChoice();
    void setBoard();
    void drawBoard();

    //in-game function calls to ensure moves are allowed and also control game state
    void movePiece(piece*,char,char);
	void isLegal();
	bool isCheck();
	bool isCheckmate();
    bool isStalemate();
	
    //pre-game function calls to determine colour
    void processChoice(char);
    bool picked = false;
    bool white;
    
    //white piece definitions note that minor/major pieces have extra space for promotion
    pawn* WhitePawns[8];
    queen* WhiteQueens[3];
    king* WhiteKings[3];
    knight* WhiteKnights[4];
    bishop* WhiteBishops[4];
    rook* WhiteRook[4];

    //black piece definitions note that minor/major pieces have extra space for promotion
    pawn* BlackPawns[8];
    queen* BlackQueens[3];
    king* BlackKings[3];
    knight* BlackKnights[4];
    bishop* BlackBishops[4];
    rook* BlackRook[4];

    
};





#endif /* gameClassCreator_hpp */
