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

    void initVariable();
    void initWindow();

    public:
    //constructors/destrustors
    Game();
    virtual ~Game();
    const bool isWindowOpen() const;

    //Methods
    void SpriteRunner();
    void pollEvents();
    void update();
    void render();

};