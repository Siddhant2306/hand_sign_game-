#include"Player.h"
#include"Game.h"

Player::Player()
{
    this->initobject();
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

void Player::update()
{
    bound = object.getGlobalBounds();
    window_size = window->getSize();
    pos = object.getPosition();

    this->object.move(velocity);

    bound = object.getGlobalBounds();


    if (bound.left < 0 || bound.left + bound.width > window_size.x)
    {
        velocity.x = -velocity.x;
        object.move(velocity.x, 0);
    }

    if (bound.top < 0 || bound.top + bound.height > window_size.y)
    {
        velocity.y = -velocity.y;
        object.move(0, velocity.y);
    }

}

void Player::render(sf::RenderTarget* target)
{
    target->draw(object);
}