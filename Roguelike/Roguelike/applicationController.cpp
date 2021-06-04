#include "application.h"

extern GameLevel gamelevel;

void Application::run()
{
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window->close();
			}
		}

		if (gamelevel == MENU)
		{
			
		}

		if (gamelevel == WORLD)
		{
			
		}

		window->clear(sf::Color::Black);

		level->run();

		draw();
	}
}