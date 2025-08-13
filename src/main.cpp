#include<iostream>
#include"Game.h"

int main()
{
    Game game;
    //Game loop 
    while (game.Running())
    {  
       //Update loop 
        game.update();


       //render
       game.render();

    }
    
    return 0;
}
