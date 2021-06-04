#ifndef LEVELBASE_H
#define LEVELBASE_H

#include "main.h"

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

	sf::Image buttonContinueImg;
	sf::Texture buttonContinueTexture;
	sf::Sprite buttonContinueSprite;

	sf::Image buttonNewGameImg;
	sf::Texture buttonNewGameTexture;
	sf::Sprite buttonNewGameSprite;

	sf::Image fieldForIpImg;
	sf::Texture fieldForIpTexture;
	sf::Sprite fieldForIpSprite;

	sf::Image buttonExitImg;
	sf::Texture buttonExitTexture;
	sf::Sprite buttonExitSprite;

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
