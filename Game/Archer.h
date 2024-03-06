#pragma once
#include <iostream>

class Archer
{
	//------------------------------------------------------------------------------------------------
	private:
	int health, force, dexterity, intelligence, wisdom;


	int generate(int max, int min)
	{
		srand(time(NULL));
		return min + rand() % max + 1;
	}
public:
	//------------------------------------------------------------------------------------------------
	Archer()
	{
		this->health = generate(8, 2);
		this->force = generate(9, 2);
		this->dexterity = generate(10, 5);
		this->intelligence = generate(10, 5);
		this->wisdom = generate(10, 3);
	}
	//------------------------------------------------------------------------------------------------
	void Print()
	{
		std::cout << "Archer";
	}
	//------------------------------------------------------------------------------------------------
	void Info()
	{
		std::cout << "\nHealth: " <<  health << std::endl
			<< "Force: " << force << std::endl 
			<< "Dexterity: " << dexterity << std::endl
			<< "Intelligence: " << intelligence << std::endl
			<< "Wisdom: " << wisdom << std::endl;
	}
	//------------------------------------------------------------------------------------------------()
};

