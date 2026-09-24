//#"janken.h"
#include <iostream>
using namespace std;


enum JankenGame
{
	Rock = 0,
	Paper = 1,
	Scissors = 2
};

JankenGame Play(int choice)
{
	return static_cast<JankenGame>(choice);
}

bool Janken()
{
	const char* janken[] = { "Rock.", "Paper.", "Scissors." };

	int user;

	cout << "Enter a number 0, 1 or 3: ";
	cin >> user;
	if (user == -1)
	{
		return false;
	}

	if (user > 2 || user < 0)
	{
		cout << "Invalid Number! Enter a number 0 - 2:" << endl;
		return true;
	}
	int computer = (rand() % 3);
	if (computer == user)
	{
		cout << "It is a tie." << endl;
	}
	else if ((user == 0 && computer == 2) || (user == 1 && computer == 1) ||
		(user == 2 && computer == 1))
	{
		cout << "You win!" << endl;
	}

	else
	{
		cout << "Computer wins!" << endl;
	}


	cout << janken[Play(user)] << endl;
}

int main()
{
	while (Janken())
	{
		//nothing
	}
	return 0;
}