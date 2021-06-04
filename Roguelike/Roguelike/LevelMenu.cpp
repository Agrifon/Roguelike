#include "LevelBase.h"

extern int windows_width;
extern int windows_height;


LevelMenu::LevelMenu(sf::RenderWindow* window)
{
	this->window = window;

	buttonContinueImg.loadFromFile("C:/git/Roguelike/img/Menu/Button/Continue.png");
	buttonContinueTexture.loadFromImage(buttonContinueImg);
	buttonContinueSprite.setTexture(buttonContinueTexture);

	buttonNewGameImg.loadFromFile("C:/git/Roguelike/img/Menu/Button/NewGame.png");
	buttonNewGameTexture.loadFromImage(buttonNewGameImg);
	buttonNewGameSprite.setTexture(buttonNewGameTexture);

	fieldForIpImg.loadFromFile("C:/git/Roguelike/img/Menu/Button/ForText.png");
	fieldForIpTexture.loadFromImage(fieldForIpImg);
	fieldForIpSprite.setTexture(fieldForIpTexture);

	buttonExitImg.loadFromFile("C:/git/Roguelike/img/Menu/Button/Exit.png");
	buttonExitTexture.loadFromImage(buttonExitImg);
	buttonExitSprite.setTexture(buttonExitTexture);

	buttonContinueSprite.setPosition(windows_width / 2 - 300, 200);
	buttonNewGameSprite.setPosition( windows_width / 2 - 300, 400);
	fieldForIpSprite.setPosition(    windows_width / 2 - 300, 600);
	buttonExitSprite.setPosition(    windows_width / 2 - 300, 800);
}

LevelMenu::~LevelMenu()
{

}

void LevelMenu::init()
{

}

void LevelMenu::run()
{
	window->draw(buttonContinueSprite);
	window->draw(buttonNewGameSprite);
	window->draw(fieldForIpSprite);
	window->draw(buttonExitSprite);
}

void LevelMenu::end()
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}
}