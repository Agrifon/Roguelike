#ifndef APPLICATION_H
#define APPLICATION_H

#include "main.h"
#include "enumGameLevel.h"
#include "LevelBase.h"

class Application
{
private:
	sf::RenderWindow* window;
	LevelBase* level;

	void draw();

public:
	Application();
	~Application();

	void init();
	void run();
	void end();
};

#endif