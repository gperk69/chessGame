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
    piece(char,char,bool,char);
    bool onboard = true;
    char posX;
    char posY;
    char type;

protected:
    
    
private:
};

class king:public piece
{
public:
    using piece::piece;
    
};

class queen:public piece
{
public:
    using piece::piece;
};
class rook:public piece
{
public:
    using piece::piece;
};

class knight:public piece
{
public:
    using piece::piece;
};

class bishop:public piece
{
public:
    using piece::piece;
};

class pawn:public piece
{
public:
    using piece::piece;
};

#endif /* pieceClasses_hpp */
