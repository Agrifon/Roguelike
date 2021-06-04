#include "application.h"

extern GameLevel gamelevel;

extern int windows_width;
extern int windows_height;

Application::Application()
	:window(nullptr)
{

}

Application::~Application()
{

}

void Application::init()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	window = new sf::RenderWindow(sf::VideoMode(windows_width, windows_height), "Roguelike", sf::Style::Default, settings);

	level = new LevelMenu(window);

	gamelevel = MENU;
}

void Application::end()
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}
}