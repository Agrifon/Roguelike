#include "windowController.h"

WindowController::WindowController(sf::RenderWindow* window)
{
	this->window = window;

	levelMenu = new LevelMenu(window);
	//levelWorld = new LevelWorld(window);
	
	level = levelMenu;
}

WindowController::~WindowController()
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}

	if (levelMenu != nullptr)
	{
		delete levelMenu;
		levelMenu = nullptr;
	}

	if (levelWorld != nullptr)
	{
		delete levelWorld;
		levelWorld = nullptr;
	}

	if (level != nullptr)
	{
		delete level;
		level = nullptr;
	}
}

void WindowController::run()
{
	level->run();
	level->end();
}

void WindowController::changeLevel(GameLevel levelEnum)
{
	switch (levelEnum)
	{
	MENU:
		level = levelMenu;
		this->levelEnum = MENU;
		break;
	WORLD:
		level = levelWorld;
		this->levelEnum = WORLD;
		break;
	default:
		break;
	}
}