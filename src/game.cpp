#include"game.h"
#include<vector>
#include<fstream>

Game::Game()
{
    this->initVariable();
    this->initWindow();
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
    this-> pollEvents();
}

void Game::render()
{
    this->window->clear(sf::Color(sf::Color(150,0,100,123)));

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
}

const bool Game::isWindowOpen() const
{
    return this->window->isOpen();
}

void Game::SpriteRunner()
{
    sf::Texture texture;
    texture.loadFromFile("C:/Users/Siddhant/WaveSimulator/build/bin/debug/explosion.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);

    
    this->window->draw(sprite);

}