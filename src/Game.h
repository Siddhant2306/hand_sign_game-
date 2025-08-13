#pragma once

#include<iostream>
#include<Graphics.hpp>
#include<Audio.hpp>
#include<System.hpp>
#include<Network.hpp>
#include<Window.hpp>

class Game
{
    private:
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videmode;
    sf::RectangleShape object;
    sf::FloatRect bound;
    sf::Vector2u window_size;
    sf::Vector2f pos;
    sf::Vector2f velocity = {2.0f , 0.0f};

    void initVariable();
    void initWindow();
    void initobject();



    public:
    //constructors/destrustors
    Game();
    virtual ~Game();
    const bool isWindowOpen() const;

    //Methods
    void pollEvents();
    void update();
    void render();

};