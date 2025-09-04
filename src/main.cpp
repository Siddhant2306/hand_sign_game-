#include<iostream>
#include"Game.h"
#include"utiliti.h"

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
