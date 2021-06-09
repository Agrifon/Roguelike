#ifndef WIDGETBASE_H
#define WIDGETBASE_H

#include "main.h"

class Widget
{
public:
	virtual void draw(sf::RenderWindow* window) = 0;
	virtual void onClick() = 0;
	virtual void setPosition(float x, float y) = 0;
};

class Button : public Widget
{
private:
	sf::Image buttonImg;
	sf::Texture buttonTexture;
	sf::Sprite buttonSprite;
public:
	Button(const std::string& filename);
	virtual ~Button();

	virtual void draw(sf::RenderWindow* window);
	virtual void onClick();
	virtual void setPosition(float x, float y);
};

class Field : public Widget
{
private:
	sf::Image fieldImg;
	sf::Texture fieldTexture;
	sf::Sprite fieldSprite;
public:
	Field(const std::string& filename);
	virtual ~Field();

	virtual void draw(sf::RenderWindow* window);
	virtual void onClick();
	virtual void setPosition(float x, float y);
};

#endif