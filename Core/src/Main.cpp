#include "Pch.h"

int main(int argc, char* argv[])
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "WindowTitle");

	while (window.isOpen())
	{
		sf::Event winEvent;
		while (window.pollEvent(winEvent))
		{
			if (winEvent.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();
		}

		window.clear(sf::Color::Black);

		window.display();
	}

	return 0;
}