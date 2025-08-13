#pragma once

#include<Graphics.hpp>
#include<Audio.hpp>
#include<System.hpp>
#include<Network.hpp>
#include<Window.hpp>

class Player 
{
    private:
    sf::RenderWindow* window;
    sf::RectangleShape object;
    sf::FloatRect bound;
    sf::Vector2u window_size;
    sf::Vector2f pos;
    sf::Vector2f velocity = {2.0f , 0.0f};

    void initobject();


    public:
    //cons/distruc
    Player();
    virtual ~Player();

    //Methods
    void update();
    void render(sf::RenderTarget* target);
};