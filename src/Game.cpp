
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL));
}

Game::~Game()
{
	delete[] animals;
	delete[] passports;
	delete character;
	delete passport;
}

bool Game::init()
{
	character = new sf::Sprite;
	passport = new sf::Sprite;

	if (!animals[0].loadFromFile("C:\\UWE YEAR 2\\MGIC++\\mgicpp-sfml-starter-template\\Data\\Images\\kenney_animalpackredux\\PNG\\Square (outline)\\zebra.png"))
	{
		std::cout << "Unable to load Animal 1";
		return false;
	} 
	if (!animals[1].loadFromFile("C:\\UWE YEAR 2\\MGIC++\\mgicpp-sfml-starter-template\\Data\\Images\\kenney_animalpackredux\\PNG\\Square (outline)\\penguin.png"))
	{
		std::cout << "Unable to load Animal 2";
		return false;
	}
	if (!animals[2].loadFromFile("C:\\UWE YEAR 2\\MGIC++\\mgicpp-sfml-starter-template\\Data\\Images\\kenney_animalpackredux\\PNG\\Square (outline)\\chicken.png"))
	{
		std::cout << "Unable to load Animal 3";
		return false;
	}

	if (!passports[2].loadFromFile(""))
	{
		std::cout << "Unable to load Passport ";
		return false;
	}

  return true;
}

void Game::update(float dt)
{

}

void Game::render()
{
	window.draw(*character);
	window.draw(*passport);
}

void Game::mouseClicked(sf::Event event)
{
  //get the click position
  sf::Vector2i click = sf::Mouse::getPosition(window);


}

void Game::keyPressed(sf::Event event)
{

}

