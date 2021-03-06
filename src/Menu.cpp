#include<SFML/System.hpp>
#include<SFML/Window/Keyboard.hpp>
#include"Menu.h"

void Menu::setPointer(int i)
{
	_pointer = i;
}

int Menu::getPointer()
{
	return _pointer;
}

void Menu::navigateMenu()
{
	if ( sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		_pointer = 0;

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		_pointer = 1;
}

bool Menu::confirmOption()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
		return true;
	else return false;
}
bool Menu::pauseCheck()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		return true;
	else return false;
}