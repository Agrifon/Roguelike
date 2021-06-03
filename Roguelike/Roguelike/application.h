#ifndef APPLICATION_H
#define APPLICATION_H

#include "main.h"

class Application
{
private:
	sf::RenderWindow* window;

	void draw();

public:
	Application();
	~Application();

	void init();
	void run();
	void end();
};

#endif