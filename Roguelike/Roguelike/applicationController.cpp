#include "application.h"

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

		window->clear(sf::Color::Black);

		windowController->run();

		draw();
	}
}