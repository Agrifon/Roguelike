#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H

#include "main.h"
#include "LevelBase.h"
#include "enumGameLevel.h"

class WindowController
{
private:
	sf::RenderWindow* window;

	GameLevel levelEnum;

	LevelBase* level;
	LevelMenu* levelMenu;
	LevelWorld* levelWorld;

public:
	WindowController(sf::RenderWindow* window);
	~WindowController();
	
	void run();
	void changeLevel(GameLevel levelEnum);
};

#endif