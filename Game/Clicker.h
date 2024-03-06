#pragma once
#include <iostream>

class Clicker
{
private:
	int health, force, dexterity, intelligence, wisdom;


	int generate(int max, int min)
	{
		srand(time(NULL));
		return min + rand() % max + 1;
	}
public:
	//------------------------------------------------------------------------------------------------
	Clicker()
	{
		this->health = generate(10, 5);
		this->force = generate(10, 2);
		this->dexterity = generate(10, 5);
		this->intelligence = generate(10, 5);
		this->wisdom = generate(10, 2);
	}
	//------------------------------------------------------------------------------------------------
	void Print()
	{
		std::cout << "Clicker";
	}
	//------------------------------------------------------------------------------------------------
	void Info()
	{
		std::cout << "\nHealth: " << health << std::endl
			<< "Force: " << force << std::endl
			<< "Dexterity: " << dexterity << std::endl
			<< "Intelligence: " << intelligence << std::endl
			<< "Wisdom: " << wisdom << std::endl;
	}
	//------------------------------------------------------------------------------------------------()
};

