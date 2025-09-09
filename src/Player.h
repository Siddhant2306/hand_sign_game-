#pragma once

#include<Graphics.hpp>
#include<Audio.hpp>
#include<System.hpp>
#include<Network.hpp>
#include<Window.hpp>

#include"utiliti.h"

class Player 
{
    private:
    sf::RenderWindow* window;
    sf::RectangleShape object;
    sf::FloatRect bound;
    sf::Vector2u window_size;
    sf::Vector2f pos;
    sf::Vector2f velocity = {2.0f , 0.0f};
    std::vector<sf::Vector2f> pos_object;
    int recordIndex = -1;
    int replayIndex =  pos_object.size() - 1;
    sf::CircleShape recordingindicator;

    void initobject();


    public:
    //cons/distruc
    Player();
    virtual ~Player();

    //Methods
    void update(sf::RenderWindow* window);
    void render(sf::RenderTarget* target);
 
    void startRecord();  
    void startReplay();
    //bool isReplay() const { return sf::Keyboard::isKeyPressed(sf::Keyboard::R); }
    bool isRecording() const {return recordIndex >=0;}
};