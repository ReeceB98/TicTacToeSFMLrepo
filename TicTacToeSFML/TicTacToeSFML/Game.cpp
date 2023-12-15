#include "Game.h"
#include <iostream>

Game::Game() : window(sf::VideoMode(800, 600), "TicTacToe"), shape(nullptr), texture(nullptr)
{
    //shape = new sf::CircleShape();
    shape = new sf::RectangleShape();
    //shape->setRadius(100.0f);
    shape->setSize(sf::Vector2f(100.0f, 25.0f));
    shape->setFillColor(sf::Color::White);

    texture = new sf::Texture();
    if (texture->loadFromFile("C:/VisualStudio/TicTacToeSFMLrepo/TicTacToeSFML/TicTacToeGrid.png"))
    {
        std::cout << "Texture has been loaded from file!\n";
    }

    sprite = new sf::Sprite();
    sprite->setTexture(*texture);
}

Game::~Game()
{
    delete shape;
    delete texture;
    delete sprite;
}

void Game::run()
{
    while (window.isOpen())
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update()
{
}

void Game::render()
{
    window.clear();
    window.draw(*shape);
    window.draw(*sprite);
    window.display();
}
