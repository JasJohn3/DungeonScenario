// Basic Random Dungeon Program
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Keys
{
	Right = 'd',
	Left = 'a',
	Up = 'w',
	Down = 's',
	Quit = 'q'
};
char Character_Movement( char Keys);
void Character_Scenario(int random_number);
void Random_Boss(int random_number);
void Trickster_Boss();
void Game();
void Wall();
int main()
{
	cout << "Welcome to Shifting Sands Dungeon.\n\n" << endl;
	cout << "This is a basic exploration game and your goal is to find a way out of the dungeon." << endl;
	cout << "The environment continuously changes as the player explores.Expect the unexpected.\n" << endl;
	cout << "There are four basic movement controls as follows: " << endl;
	cout << "W - Step forward" << endl;
	cout << "S - Step backward" << endl;
	cout << "A - Step Left" << endl;
	cout << "D - Step Right" << endl;
	cout << "Q - Quit" << endl;
	Game();
	
	return 0;

}
char Character_Movement(char Keys)
{
	while (true)
	{

		int random = 0;

		if (Keys == Right)
		{
			random = rand() % 6 + 1;
			cout << "Test D" << endl;
			cout << random << endl;
			Character_Scenario(random);
			Game();
		}
		else if (Keys == Left)
		{
			cout << "Test A" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;
			Character_Scenario(random);
			Game();
		}
		else if (Keys == Up)
		{
			cout << "Test W" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;
			Character_Scenario(random);
			Game();
		}
		else if (Keys == Down)
		{
			cout << "Test S" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;
			Character_Scenario(random);
			Game();
		}
		else if (Keys == Quit)
		{
			exit(0);
		}
		else
		{
			cout << "Invalid direction, use W,S,A,D to move up, down, left, right. Q to quit.\n";
			Game();
		}



	}
}
void Character_Scenario(int random_number)
{

	switch (random_number)
	{
		case 1: Wall();
			break;
		case 2: cout << "The dungeon shifts all around you." << endl;
				cout << "You still appear to be in a hallway." << endl;
				cout << "press another directional key." << endl;
			break;
		case 3: cout << "The Oasis room: " << endl;
				cout << "You have found a random safe room." << endl;
				cout << "The room is filled with food and delights,\ntake a moment to rest." << endl;
				cout << "press another directional key." << endl;
			
			break;
		case 4: cout << "Uhh Ohh, you have found a boss"<< endl; 
			Random_Boss(random_number);
			break;
		case 5: cout << "You have found the exit:" << endl;
				cout << "Congratulations" << endl;
				cout << "Thank you for playing" << endl;
				system("pause");
				exit(0);
			break;
		case 6: cout << "You have found a room with a boss in it:" << endl;
			Random_Boss(random_number);
			break;
	default:
		break;
	}
}
void Random_Boss(int random_number)
{
	switch (random_number)
	{
	case 1: cout << "The Guard Captain:" << endl;
			cout << "The Guard captain is a life long servant of the shifting sands dungeon.  There is no escape." << endl; 
			cout << "He returns you to your cell and you must begin the journey again." << endl;
			main();
		break;
	case 2: cout << "The Trickster:" << endl;
		cout << "The trickster is a cunning adversary but fair." << endl;
		cout << "He offers you a choice.Guess a number between 1 and 3." << endl;
		cout << "Guess correctly and you exit the dungeon, guess wrong and you restart." << endl;
		Trickster_Boss();
		break;
	case 3: cout << "Deadly Boss 3" << endl;
			cout << "You have died" << endl;
			system("pause");
			exit(0);
		break;
	case 4: cout << "Deadly Boss 4" << endl;
			cout << "You have died" << endl;
			system("pause");
			exit(0);
		break;
	case 5: cout << "Dealdy Boss 5" << endl;
			cout << "You have died" << endl;
			system("pause");
			exit(0);
		break;
	case 6: cout << "Boss 6" << endl;
			cout << "You have died" << endl;
			system("pause");
			exit(0);
		break;
	default:
		break;
	}
}
void Game()
{
	srand(time(0));
	char key;
	cin >> key;
	Character_Movement(key);
	
}
void Trickster_Boss()
{
	int Number;
	int Guess;

	Number = rand() % 3 + 1;
	cout << "The trickster ask you to guess the Number between 1 and 3" << endl;
	cin >> Guess;

	if (Guess < Number || Guess > Number)
	{
		cout << "You have entered the Wrong Number." << endl;
		cout << "The trickster snaps his fingers and you return to the beginning." << endl;
		main();
	}
	else if (Guess == Number)
	{
		cout << "Congratulations you have guessed correctly." << endl;
		cout << "The trickster snaps his fingers and you exit the dungeon." << endl;
		cout << "Thank you for playing" << endl;
		system("pause");
		exit;
	}

	
}
void Wall()
{
	cout << "You have hit a wall.  You must choose left or right" << endl;
	cout << "A - Step Left" << endl;
	cout << "D - Step Right" << endl;
	cout << "Make your choice: " << endl;
	char key;
	cin >> key;

	if (key == 'a' || key == 'A')
	{
		cout << "Press W,A,S,D" << endl;
		Game();
	}
	else if (key == 'd' || key == 'D')
	{
		cout << "Press W,A,S,D" << endl;
		Game();

	}
	else if (key == 'w' || key == 'W')
	{
		cout << "You ran into the wall silly." << endl;
		Wall();
	}
	else if (key == 's' || key == 'S')
	{
		cout << "You can't turn back anymore, you must go left or right." << endl;
		Wall();
	}
	else
	{
		cout << "What do you think your doing, that's not a direction." << endl;
		Wall();
	}
}