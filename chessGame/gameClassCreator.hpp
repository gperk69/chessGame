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
    
};






#endif /* gameClassCreator_hpp */
