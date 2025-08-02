#include<iostream>
#include"Game.h"

int main()
{
    Game game;
    game.SpriteRunner(); 
    //Game loop 
    while (game.isWindowOpen())
    {  
       //Update loop 
        game.update();


       //render
       game.render();

    }
    
    return 0;
}
