#include <iostream>
#include <string>
#include "gameClassCreator.hpp"

extern char boardVisuals[8][8];
extern piece* board[8][8];



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
        board[WhitePawns[i]->posX][WhitePawns[i]->posY] = WhitePawns[i];
	}
    
    //queen
    
    WhiteQueens[0] = new queen(3,7,true,'Q');
	board[WhiteQueens[0]->posX][WhiteQueens[0]->posY] = WhiteQueens[0];
    
    //king
    
    WhiteKings[0] = new king(4,7,true,'K');
	board[WhiteKings[0]->posX][WhiteKings[0]->posY] = WhiteKings[0];

    //bishops
    for (int i = 0; i < 2; i++)
    {
        WhiteBishops[i] = new bishop(2+(3*i),7,true,'B');
        board[WhiteBishops[i]->posX][WhiteBishops[i]->posY] = WhiteBishops[i];
    }
    //knights
    for (int i = 0; i < 2; i++)
    {
        WhiteKnights[i] = new knight(1+(5*i),7,true,'N');
        board[WhiteKnights[i]->posX][WhiteKnights[i]->posY] = WhiteKnights[i];
    }
    
    //rooks
    for (int i = 0; i < 2; i++)
    {
        WhiteRook[i] = new rook(0+(7*i),7,true,'R');
        board[WhiteRook[i]->posX][WhiteRook[i]->posY] = WhiteRook[i];
    }

    
    
    //////////////////
    ///black pieces///
    //////////////////
    
    //pawns
    
    for (int i = 0; i < 8; i++)
    {
        BlackPawns[i] = new pawn(i,1,false,'p');
        board[BlackPawns[i]->posX][BlackPawns[i]->posY] = BlackPawns[i];
        
    }
    
    //queen
    
    BlackQueens[0] = new queen(3,0,false,'q');
    board[BlackQueens[0]->posX][BlackQueens[0]->posY] = BlackQueens[0];
    
    //king
    
    BlackKings[0] = new king(4,0,false,'k');
    board[BlackKings[0]->posX][BlackKings[0]->posY] = BlackKings[0];
    
    //bishops
    for (int i = 0; i < 2; i++)
    {
        BlackBishops[i] = new bishop(2+(3*i),0,false,'b');
        board[BlackBishops[i]->posX][BlackBishops[i]->posY] = BlackBishops[i];
    }
    //knights
    for (int i = 0; i < 2; i++)
    {
        BlackBishops[i] = new bishop(1+(5*i),0,false,'n');
        board[WhiteKnights[i]->posX][BlackBishops[i]->posY] = BlackBishops[i];
    }
    
    //rooks
    for (int i = 0; i < 2; i++)
    {
        BlackRook[i] = new rook(0+(7*i),0,false,'r');
        board[BlackRook[i]->posX][BlackRook[i]->posY] = BlackRook[i];
    }
	
}

void Game::drawBoard()
{
    
	//////////////////
	///white pieces///
	//////////////////

	//pawns

	for (int i = 0; i < 8; i++)
	{
		boardVisuals[WhitePawns[i]->posX][WhitePawns->posY] = WhitePawns->type;
	}

	//queen

	for (int i = 0; i < 3; i++)
	{
		boardVisuals[WhitePawns[i]->posX][WhitePawns->posY] = WhitePawns->type;
	}

	//king

	WhiteKings[0] = new king(4, 7, true, 'K');
	board[WhiteKings[0]->posX][WhiteKings[0]->posY] = WhiteKings[0];

	//bishops
	for (int i = 0; i < 2; i++)
	{
		WhiteBishops[i] = new bishop(2 + (3 * i), 7, true, 'B');
		board[WhiteBishops[i]->posX][WhiteBishops[i]->posY] = WhiteBishops[i];
	}
	//knights
	for (int i = 0; i < 2; i++)
	{
		WhiteKnights[i] = new knight(1 + (5 * i), 7, true, 'N');
		board[WhiteKnights[i]->posX][WhiteKnights[i]->posY] = WhiteKnights[i];
	}

	//rooks
	for (int i = 0; i < 2; i++)
	{
		WhiteRook[i] = new rook(0 + (7 * i), 7, true, 'R');
		board[WhiteRook[i]->posX][WhiteRook[i]->posY] = WhiteRook[i];
	}



	//////////////////
	///black pieces///
	//////////////////

	//pawns

	for (int i = 0; i < 8; i++)
	{
		BlackPawns[i] = new pawn(i, 1, false, 'p');
		board[BlackPawns[i]->posX][BlackPawns[i]->posY] = BlackPawns[i];

	}

	//queen

	BlackQueens[0] = new queen(3, 0, false, 'q');
	board[BlackQueens[0]->posX][BlackQueens[0]->posY] = BlackQueens[0];

	//king

	BlackKings[0] = new king(4, 0, false, 'k');
	board[BlackKings[0]->posX][BlackKings[0]->posY] = BlackKings[0];

	//bishops
	for (int i = 0; i < 2; i++)
	{
		BlackBishops[i] = new bishop(2 + (3 * i), 0, false, 'b');
		board[BlackBishops[i]->posX][BlackBishops[i]->posY] = BlackBishops[i];
	}
	//knights
	for (int i = 0; i < 2; i++)
	{
		BlackBishops[i] = new bishop(1 + (5 * i), 0, false, 'n');
		board[WhiteKnights[i]->posX][BlackBishops[i]->posY] = BlackBishops[i];
	}

	//rooks
	for (int i = 0; i < 2; i++)
	{
		BlackRook[i] = new rook(0 + (7 * i), 0, false, 'r');
		board[BlackRook[i]->posX][BlackRook[i]->posY] = BlackRook[i];
	}




	
	
	
	
	for(int y = 0; y < 8; y++ )
    {
        std::cout << std::endl;
        for(int x = 0; x < 8; x++)
        {
            std::cout << boardVisuals[x][y] << ' ';
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

piece* Game::getPiece(char x, char y)
{
	return board[x][y];
}

void Game::movePiece(piece* p, char finalX, char finalY)
{
    p->posX = finalX;
    p->posY = finalY;
}

