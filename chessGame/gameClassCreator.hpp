#ifndef gameClassCreator_hpp
#define gameClassCreator_hpp

#include <stdio.h>
#include "pieceClasses.hpp"





//information needed for a game to happen
struct Game
{
    //pre-game function calls to determine colour
    void processChoice(char);
    bool picked = false;
    bool white;
    
    //pre-game variable list
    bool checkmate = false;
    bool stalemate = false;
    
    //pre-game function calls to start game note that drawBoard called every time a piece moves
    void startGame();
    char getChoice();
    void setBoard();
    void drawBoard();

    //in-game function calls to ensure moves are allowed and also control game state
    piece* getPiece(char,char);
    void movePiece(piece*,char,char);
	void isLegal();
	bool isCheck();
	bool isCheckmate();
    bool isStalemate();
	
    
    //white piece definitions note that minor/major pieces have extra space for promotion
    pawn* WhitePawns[8];
    queen* WhiteQueens[1];
    king* WhiteKings[1];
    knight* WhiteKnights[2];
    bishop* WhiteBishops[2];
    rook* WhiteRook[2];

    //black piece definitions note that minor/major pieces have extra space for promotion
    pawn* BlackPawns[8];
    queen* BlackQueens[1];
    king* BlackKings[1];
    knight* BlackKnights[2];
    bishop* BlackBishops[2];
    rook* BlackRook[2];

    
};





#endif /* gameClassCreator_hpp */
