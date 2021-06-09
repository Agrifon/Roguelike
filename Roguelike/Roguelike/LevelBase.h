#ifndef LEVELBASE_H
#define LEVELBASE_H

#include "main.h"
#include "WidgetBase.h"

class LevelBase
{
public:
	virtual void init() = 0;
	virtual void run() = 0;
	virtual void end() = 0;
};

class LevelMenu : public LevelBase
{
private:
	sf::RenderWindow* window;

	Widget* buttonContinue;
	Widget* buttonNewGame;
	Widget* fieldIP;
	Widget* buttonExit;

public:
	LevelMenu(sf::RenderWindow* window);
	virtual ~LevelMenu();
	virtual void init();
	virtual void run();
	virtual void end();
};

class LevelWorld : public LevelBase
{
private:
	sf::RenderWindow* window;

public:
	LevelWorld(sf::RenderWindow* window);
	virtual ~LevelWorld();
	virtual void init();
	virtual void run();
	virtual void end();
};

#endif // !LEVELBASE_H
