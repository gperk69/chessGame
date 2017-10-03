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
		WhitePawns[i] = new pawn(i,6,true);
        board[WhitePawns[i]->posX][WhitePawns[i]->posY] = WhitePawns[i]->type;

	}
    
    //queen
    
    WhiteQueens[0] = new queen(3,7,true);
    board[WhiteQueens[0]->posX][WhiteQueens[0]->posY] = WhiteQueens[0]->type;
    
    //king
    
    WhiteKings[0] = new king(4,7,true);
    board[WhiteKings[0]->posX][WhiteKings[0]->posY] = WhiteKings[0]->type;
    
    //bishops
    for (int i = 0; i < 2; i++)
    {
        WhiteBishops[i] = new bishop(2+(3*i),7,true);
        board[WhiteBishops[i]->posX][WhiteBishops[i]->posY] = WhiteBishops[i]->type;
    }
    //knights
    
    //rooks

    
    
    //////////////////
    ///black pieces///
    //////////////////
    
    //pawns
    
    for (int i = 0; i < 8; i++)
    {
        BlackPawns[i] = new pawn(i,1,false);
        board[BlackPawns[i]->posX][BlackPawns[i]->posY] = BlackPawns[i]->type+32;
        
    }
    
    //queen
    
    BlackQueens[0] = new queen(3,0,false);
    board[BlackQueens[0]->posX][BlackQueens[0]->posY] = BlackQueens[0]->type;
    
    //king
    
    //bishops
    
    //knights
    
    //rooks
	
}

void Game::drawBoard()
{
    for(int y = 0; y < 8; y++)
    {
        std::cout << std::endl;
        for(int x = 0; x < 8; x++)
        {
            std::cout << board[x][y] << " ";
        }
    }
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

