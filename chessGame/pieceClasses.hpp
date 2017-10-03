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
    piece(char,char,bool);
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
    char type = 'K';
protected:
    
private:
};

class queen:public piece
{
public:
    using piece::piece;
    char type = 'Q';

};

class rook:public piece
{
public:
    using piece::piece;
    char type = 'R';

    
protected:
    
private:

};

class knight:public piece
{
public:
    using piece::piece;
    char type = 'N';

protected:
    
private:

};

class bishop:public piece
{
public:
    using piece::piece;
    char type = 'B';
    
protected:
    
private:

};

class pawn:public piece
{
public:
    using piece::piece;
    char type = 'P';
    
protected:
    
private:

};

#endif /* pieceClasses_hpp */
