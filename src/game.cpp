#include"game.h"
#include<vector>
#include<fstream>
//Intiations

Game::Game()
{
    this->initVariable();
    this->initWindow();
    //this->initobject();
} 

Game::~Game()
{
    delete this->window;
}

//Method 
void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev))
    {
        switch(this -> ev.type)
        {
         case sf::Event::Closed:
            this->window->close();
            break;
         
         case sf::Event::KeyPressed:
            if(this->ev.key.code == sf::Keyboard::Escape)
                this->window->close();
            break;
        }
    }
}

void Game::update()
{
    this->pollEvents();

    player.update();
   
    /*
    bound = object.getGlobalBounds();
    window_size = window->getSize();
    pos = object.getPosition();

    this->pollEvents();

    player.update();

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
    */

}

void Game::render()
{
    this->window->clear(sf::Color(sf::Color(150,0,100,123)));

    //this->window->draw(object);
    this->player.render(this->window);

    this->window->display();
}

//Private function 
void Game::initVariable()
{
    this->window = nullptr; 
}

void Game::initWindow()
{
    this->videmode.height = 600;
    this->videmode.width = 800;
    
    this-> window  = new sf::RenderWindow(sf::VideoMode(800,600), "Main window", sf::Style::Titlebar | sf::Style::Close);

    this-> window -> setFramerateLimit(144);
}

/*
void Game::initobject()
{
    this->object.setPosition(250,250);
    this->object.setSize(sf::Vector2(50.f,50.f));
    this->object.setFillColor(sf::Color::Green);
}
*/

const bool Game::Running() const
{
    return this->window->isOpen();
}

