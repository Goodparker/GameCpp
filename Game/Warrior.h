#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "windows.h"
#include "Fighters.h"


class Warrior : public Fighters
{

private:
	int health, force, dexterity, intelligence, wisdom;
	std::string name;
	std::string arr[4][2]
	{ 
		{"год основания ссср","1922"},
		{"Сколько оборотов вокруг своей оси делает земля за сутки?","1"},
		{"Сколько сосков на вымени коровы?","4"},
		{"Сколько глаз у паука?","8"}
	};
	Fighters fight;

	int generate(int max, int min){ return min + rand() % max + 1; }

public:
	//------------------------------------------------------------------------------------------------
	Warrior()
	{
		srand(time(nullptr));
		this->health = generate(10, 5);
		this->force = generate(10, 5);
		this->dexterity = generate(10, 2);
		this->intelligence = generate(10, 2);
		this->wisdom = generate(10, 2);
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
	//------------------------------------------------------------------------------------------------
	void Start()
	{
		if (fight.FirstLevel == true)
		{
			Fight2();
		}
		else
		{
			if (name == "")
			{
				std::cout << "Enter the warrior's name: ";
				std::cin >> name;
				std::cout << "\nGreetings, " << name << std::endl;
			}
			if (health > 0)
			{
				Fight3();
			}
			else
			{
				std::cout << "Sorry, you can't play this fighter anymore.";
			}
		}		
	}
	//------------------------------------------------------------------------------------------------
	void Fight1()
	{


		system("cls");
		int you, bot, answer;
		std::cout << "first room\n";
		std::cout << "your characteristics before the fight\n";
		Info();
		you = generate(6, 0);
		bot = generate(6, 0);
		std::cout << "\nyou: " << you << "  bot: " << bot << std::endl;
		if (you > bot)
		{
			std::cout << "win\n";
			force += generate(3, 0);
			dexterity += generate(3, 0);
			intelligence += generate(3, 0);
			wisdom += generate(3, 0);
		}
		else
		{
			std::cout << "lose\n";
			health -= generate(3, 0);
			force -= generate(3, 0);
			dexterity -= generate(3, 0);
			intelligence -= generate(3, 0);
			wisdom -= generate(3, 0);
		}
		std::cout << "your characteristics after the battle:\n";
		Info();
		if (force >= 20)
		{
			fight.FirstLevel = true;
			Fight2();
		}

		std::cout << "Combat menu:\n"
			"1. Continue to fight \n"
			"2. Exit to main menu \n";
		std::cout << "enter the action number: ";
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			std::cout << "Wait 5 seconds\n";
			Sleep(5000);
			Start();
			break;
		case 2:
			break;
		default:
			cout << "choose another number \n";
			break;
		}

	}
	void Fight2()
	{	
		if (health > 0)
		{
			if (fight.SecondLevel == true)
			{
				Fight3();
			}
			else
			{
				system("cls");
				std::string answer;
				std::cout << "second room\n";
				std::cout << "Hello," << name << std::endl;
				int rnd = generate(4, 0);
				std::cout << arr[rnd][0];
				std::cout << "answer: ";
				std::cin >> answer;
				if (answer == arr[rnd][1])
				{
					std::cout << "win\n";
					force += generate(3, 0);
					dexterity += generate(3, 0);
					intelligence += generate(3, 0);
					wisdom += generate(3, 0);
					fight.SecondLevel = true;
					Fight3();
				}
				else
				{
					std::cout << "lose\n";
					health -= generate(3, 0);
					force -= generate(3, 0);
					dexterity -= generate(3, 0);
					intelligence -= generate(3, 0);
					wisdom -= generate(3, 0);
					Fight2();
				}
				std::cout << "your characteristics after the battle:\n";
				Info();
			}
		}
		else
		{
			std::cout << "Sorry, you can't play this fighter anymore.";
		}
		
		
	}
	void Fight3()
	{
		if (health > 0)
		{
			int rez, answer;
			system("cls");
			std::cout << "Third room\n";
			std::cout << "Hello," << name << std::endl;
			int rnd = generate(100, 0);
			for (int i = 0; i < 5; i++)
			{
				std::cout << "rez";
				std::cin >> rez;
				if (rez > rnd)
				{
					std::cout << "rez > rnd";
				}
				else
				{
					std::cout << "rez < rnd";
				}

				if (rez == rnd)
				{
					std::cout << "win\n";
				}
			}
				std::cout << "lose\n";
				
				std::cout << "Combat menu:\n"
					"1. Continue to fight \n"
					"2. Exit to main menu \n";

				std::cout << "enter the action number: ";
				std::cin >> answer;
				switch (answer)
				{
				case 1:
					Fight3();
					break;
				case 2:
					break;
				default:
					cout << "choose another number \n";
					break;
				}

		}
		else
		{
			std::cout << "Sorry, you can't play this fighter anymore.";
		}
		
	}
};
