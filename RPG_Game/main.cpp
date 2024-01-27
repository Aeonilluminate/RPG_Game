#include <SFML/Graphics.hpp>

int main()
{
	// Initialize and create the window
	sf::RenderWindow window(sf::VideoMode(800, 600), "RPG Game");

	// Main game loop
	while (window.isOpen())
	{

		//--------------------------------------- / BEGIN UPDATE \ ---------------------------------|

		// Check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{

			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//---------------------------------------- \ END UPDATE / -----------------------------------|

		//---------------------------------------- / BEGIN DRAW \ -----------------------------------|

		// clear the window with black color
		window.clear(sf::Color::Red);

		// draw everthinghere...
		// window.draw(...);

		// end the current frame
		window.display();

		//---------------------------------------- \ END DRAW / --------------------------------------|
	}

	return 0;
}