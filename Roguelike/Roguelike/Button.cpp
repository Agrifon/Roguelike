#include "WidgetBase.h"

Button::Button(const std::string& filename)
{
	buttonImg.loadFromFile(filename);
	buttonTexture.loadFromImage(buttonImg);
	buttonSprite.setTexture(buttonTexture);
}

Button::~Button()
{

}

void Button::draw(sf::RenderWindow* window)
{
	window->draw(buttonSprite);
}

void Button::onClick()
{

}

void Button::setPosition(float x, float y)
{
	buttonSprite.setPosition(x, y);
}