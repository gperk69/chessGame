//
//  pieceClasses.hpp
//  chessGame
//
//  Created by George Perkins on 24/09/2017.
//  Copyright © 2017 George Perkins. All rights reserved.
//

#ifndef pieceClasses_hpp
#define pieceClasses_hpp

#include <stdio.h>

class piece
{
public:
    
private:
    bool onBoard;
	char x;
	char y;    
};

class king: public piece
{
    
};

class queen: public piece
{
    
};

class rook: public piece
{
    
};

class knight: public piece
{
    
};

class bishop: public piece
{
    
};

class pawn: public piece
{
    
};

#endif /* pieceClasses_hpp */
