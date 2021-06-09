#include "LevelBase.h"

extern int windows_width;
extern int windows_height;


LevelMenu::LevelMenu(sf::RenderWindow* window)
{
	this->window = window;

	buttonContinue = new Button("C:/git/Roguelike/img/Menu/Button/Continue.png");
	buttonNewGame = new Button("C:/git/Roguelike/img/Menu/Button/NewGame.png");
	fieldIP = new Field("C:/git/Roguelike/img/Menu/Button/ForText.png");
	buttonExit = new Button("C:/git/Roguelike/img/Menu/Button/Exit.png");

	buttonContinue->setPosition(windows_width / 2 - 300, 200);
	buttonNewGame->setPosition( windows_width / 2 - 300, 400);
	fieldIP->setPosition(		windows_width / 2 - 300, 600);
	buttonExit->setPosition(	windows_width / 2 - 300, 800);
}

LevelMenu::~LevelMenu()
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}
}

void LevelMenu::init()
{

}

void LevelMenu::run()
{
	buttonContinue->draw(window);
	buttonNewGame->draw(window);
	fieldIP->draw(window);
	buttonExit->draw(window);
}

void LevelMenu::end()
{
	
}