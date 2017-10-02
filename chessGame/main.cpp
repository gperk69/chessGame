
#include <iostream>
#include "pieceClasses.hpp"
#include "gameClassCreator.hpp"

static game Game;

//game start script
void startGame(game* Game)
{
    //get choice for white or black
    while(Game->picked == false)
    {
        char choice = Game->getChoice();
        Game->processChoice(choice);
    }
    
}


pawn A();

int main()
{
    //initialise game instance + get choice
    
    startGame(&Game);
}
