#ifndef APPLICATION_H
#define APPLICATION_H

#include "main.h"
#include "enumGameLevel.h"
#include "windowController.h"

class Application
{
private:
	sf::RenderWindow* window;
	WindowController* windowController;

	void draw();

public:
	Application();
	~Application();

	void init();
	void run();
	void end();
};

#endif