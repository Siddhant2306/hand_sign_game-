#pragma once

#include<iostream>
#include<ctime>

#include"Player.h"
#include"utiliti.h"

class Game
{
    private:
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videmode;

    Player player;
    
    /*
    sf::RectangleShape object;
    sf::FloatRect bound;
    sf::Vector2u window_size;
    sf::Vector2f pos;
    sf::Vector2f velocity = {2.0f , 0.0f};
    */

    void initVariable();
    void initWindow();
    void initplayer();
    //void initobject();

    public:
    //constructors/destrustors
    Game();
    virtual ~Game();
    const bool Running() const;

    //Methods
    void pollEvents();
    void update();
    void render();

};