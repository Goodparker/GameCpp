#include <iostream>
#include <string>
#include "Warrior.h"
#include "Magician.h"
#include "Archer.h"
#include "Clicker.h"
using namespace std;

int deistvie = 0;
void startMenu();
void СhoiceOfFighter();
void InfoOfFighter();
Warrior warrior;
Magician magician;
Archer archer;
Clicker clicker;
Fighters fighers;

int main()
{
	setlocale(LC_ALL, "RU");

	while (deistvie != 3)
	{
		startMenu();
	
		switch (deistvie)
		{
		case 1:
			InfoOfFighter();
			break;
		case 2:
			СhoiceOfFighter();
			break;
		case 3:
			break;
		default:
			cout << "choose another number \n";
			break;
		}
	}
	return 0;
}
void startMenu()
{
	cout << "\nTeams:\n"
		"1. Info of fighter \n"
		"2. Сhoice of fighter \n"
		"3. Exit \n";
	cout << "Enter the action number: ";
	cin >> deistvie;
	cout << "\n";
}
void InfoOfFighter()
{
	int choiceOfFighter;
	system("cls");
	cout << "Info:\n"
		"1. Warrior \n"
		"2. Magician \n"
		"3. Archer \n"
		"4. Clicker \n"
		"5. Back\n";
	cout << "enter the action number: ";
	cin >> choiceOfFighter;

	switch (choiceOfFighter)
	{
	case 1:
		warrior.Info();
		break;
	case 2:
		magician.Info();
		break;
	case 3:
		archer.Info();
		break;
	case 4:
		clicker.Info();
		break;
	case 5:
		break;
	}
}
void СhoiceOfFighter()
{
	
	int choiceOfFighter;
	system("cls");
	cout << "Fighter:\n"
		"1. Warrior \n"
		"2. Magician \n"
		"3. Archer \n"
		"4. Сlicker \n"
		"5. Back\n";
	cout << "enter the action number: ";
	cin >> choiceOfFighter;
	switch (choiceOfFighter)
	{
	case 1:
		warrior.Start();
		break;
	case 2:
		magician.Start();
		break;
	case 3:
		archer.Start();
		break;
	case 4:
		clicker.Start();
		break;
	case 5:
		break;
	}
}
