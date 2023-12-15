#pragma once
#include "SFML/Graphics.hpp"

class Game
{
public:
	
	// Constructor and Destructor
	Game();
	~Game();

	void run();

private:

	void processEvents();
	void update();
	void render();

	// Variables
	sf::RenderWindow window;
	//sf::CircleShape* shape;
	sf::RectangleShape* shape;

	sf::Texture* texture;
	sf::Sprite* sprite;
};

