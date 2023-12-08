#include "Game.h"
Game::Game() : window(sf::VideoMode(800, 600), "TicTacToe"), shape(nullptr)
{
    shape = new sf::CircleShape();
    shape->setRadius(100.0f);
    shape->setFillColor(sf::Color::Green);
}

Game::~Game()
{
    delete shape;
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
    window.display();
}
