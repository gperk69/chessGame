#include <iostream>
#include <string>
#include "gameClassCreator.hpp"

extern char board[8][8];



//game start script
void Game::startGame()
{
    //get choice for white or black
    while(picked == false)
    {
        char choice = getChoice();
        processChoice(choice);
    }
    
}

//get white||black
char Game::getChoice()
{
    std::string choice;
    std::cout << "B or W?" << std::endl;
    std::getline(std::cin, choice);
    return choice[0];
}

void Game::setBoard()
{
    //////////////////
    ///white pieces///
    //////////////////
    
    //pawns
    
    for (int i = 0; i < 8; i++)
	{
		WhitePawns[i] = new pawn(i,6,true,'P');
        board[WhitePawns[i]->posX][WhitePawns[i]->posY] = WhitePawns[i]->type;
	}
    
    //queen
    
    WhiteQueens[0] = new queen(3,7,true,'Q');
    board[WhiteQueens[0]->posX][WhiteQueens[0]->posY] = WhiteQueens[0]->type;
    
    //king
    
    WhiteKings[0] = new king(4,7,true,'K');
    board[WhiteKings[0]->posX][WhiteKings[0]->posY] = WhiteKings[0]->type;
    
    //bishops
    for (int i = 0; i < 2; i++)
    {
        WhiteBishops[i] = new bishop(2+(3*i),7,true,'B');
        board[WhiteBishops[i]->posX][WhiteBishops[i]->posY] = WhiteBishops[i]->type;
    }
    //knights
    for (int i = 0; i < 2; i++)
    {
        WhiteKnights[i] = new knight(1+(5*i),7,true,'N');
        board[WhiteKnights[i]->posX][WhiteKnights[i]->posY] = WhiteKnights[i]->type;
    }
    
    //rooks
    for (int i = 0; i < 2; i++)
    {
        WhiteRook[i] = new rook(0+(7*i),7,true,'R');
        board[WhiteRook[i]->posX][WhiteRook[i]->posY] = WhiteRook[i]->type;
    }

    
    
    //////////////////
    ///black pieces///
    //////////////////
    
    //pawns
    
    for (int i = 0; i < 8; i++)
    {
        BlackPawns[i] = new pawn(i,1,false,'p');
        board[BlackPawns[i]->posX][BlackPawns[i]->posY] = BlackPawns[i]->type;
        
    }
    
    //queen
    
    BlackQueens[0] = new queen(3,0,false,'q');
    board[BlackQueens[0]->posX][BlackQueens[0]->posY] = BlackQueens[0]->type;
    
    //king
    
    BlackKings[0] = new king(4,0,false,'k');
    board[BlackKings[0]->posX][BlackKings[0]->posY] = BlackKings[0]->type;
    
    //bishops
    for (int i = 0; i < 2; i++)
    {
        BlackBishops[i] = new bishop(2+(3*i),0,false,'b');
        board[BlackBishops[i]->posX][BlackBishops[i]->posY] = BlackBishops[i]->type;
    }
    //knights
    for (int i = 0; i < 2; i++)
    {
        BlackBishops[i] = new bishop(1+(5*i),0,false,'n');
        board[WhiteKnights[i]->posX][BlackBishops[i]->posY] = BlackBishops[i]->type;
    }
    
    //rooks
    for (int i = 0; i < 2; i++)
    {
        BlackRook[i] = new rook(0+(7*i),0,false,'r');
        board[BlackRook[i]->posX][BlackRook[i]->posY] = BlackRook[i]->type;
    }
	
}

void Game::drawBoard()
{
    //feel like there is a better way of doing this using object manipulation
    for(int y = 0; y < 8; y++ )
    {
        std::cout << std::endl;
        for(int x = 0; x < 8; x++)
        {
            std::cout << board[x][y] << ' ';
        }
    }
    std::cout << std::endl;
}


void Game::processChoice(char choice)
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

void Game::movePiece(piece* p, char finalX, char finalY)
{
    p->posX = finalX;
    p->posY = finalY;
}

