#include "WidgetBase.h"

Field::Field(const std::string& filename)
{
	fieldImg.loadFromFile(filename);
	fieldTexture.loadFromImage(fieldImg);
	fieldSprite.setTexture(fieldTexture);
}

Field::~Field()
{

}

void Field::draw(sf::RenderWindow* window)
{
	window->draw(fieldSprite);
}

void Field::onClick()
{

}

void Field::setPosition(float x, float y)
{
	fieldSprite.setPosition(x, y);
}