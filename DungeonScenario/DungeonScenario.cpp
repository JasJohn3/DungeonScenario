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
int main()
{
	srand(time(0));
	char key;
	cin >> key;
	Character_Movement(key);
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

			main();
		}
		else if (Keys == Left)
		{
			cout << "Test A" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;
			main();
		}
		else if (Keys == Up)
		{
			cout << "Test W" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;

			main();
		}
		else if (Keys == Down)
		{
			cout << "Test S" << endl;
			random = rand() % 6 + 1;
			cout << random << endl;

			main();
		}
		else if (Keys == Quit)
		{
			return 0;
			main();
		}
		else
		{
			cout << "Invalid direction, use W,S,A,D to move up, down, left, right. Q to quit.\n";
			main();
		}


	}
}
void Character_Scenario(int random_number)
{
	switch (random_number)
	{
		case 1: cout << '1'; // prints "1"
			break;
		case 2: cout << '2'; // prints "2"
			break;
		case 3: cout << '3'; // prints "3"
			break;
		case 4: cout << '4'; // prints "4"
			break;
		case 5: cout << '5'; // prints "5"
			break;
		case 6: cout << '6'; // prints "6"
			break;
	default:
		break;
	}
}

