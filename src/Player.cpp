#include<vector>

#include"Player.h"
#include"Game.h"
#include"utiliti.h"

Player::Player()
{
    this->initobject();

    recordingindicator.setRadius(20.f);
    recordingindicator.setFillColor(sf::Color::Red);
    recordingindicator.setPosition(10,10);

    Log("object initiated");    
}

Player::~Player()
{

}

void Player::initobject()
{
    this->object.setPosition(250,250);
    this->object.setSize(sf::Vector2f(50.f,50.f));
    this->object.setFillColor(sf::Color::Green);

}

void Player::update(sf::RenderWindow* window)
{    
    if (!isRecording() && replayIndex >= 0 && replayIndex < pos_object.size())
    {
        object.setPosition(pos_object[replayIndex]);
        replayIndex--;
    }
      
    if(recordIndex >= 0) 
    {
        pos_object.push_back(pos);
    }
            
    bound = object.getGlobalBounds();
    window_size = window->getSize();
    pos = object.getPosition();
    Log("all the initials set");

    this->object.move(velocity);

    bound = object.getGlobalBounds();


    if (bound.left < 0 || bound.left + bound.width > window_size.x)
    {
        velocity.x = -velocity.x;
        object.move(velocity.x, 0);
        Log("object collided with x");
    }

    if (bound.top < 0 || bound.top + bound.height > window_size.y)
    {
        velocity.y = -velocity.y;
        object.move(0, velocity.y);
        Log("object collided with y");
    }

}

void Player::startRecord()
{
    recordIndex = 0; 
    pos_object.clear();
}

void Player::startReplay()
{
    recordIndex = -1;
    replayIndex = static_cast<int>(pos_object.size()) - 1;
}

void Player::render(sf::RenderTarget* target)
{
    target->draw(object);

    if(isRecording())
    {
        target->draw(recordingindicator);
    }
}