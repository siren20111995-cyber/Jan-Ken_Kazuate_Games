#include"Kazuate.h"
#include"janken.h"
#include <iostream>
using namespace std;




int main()
{
	while (janken())
	{
		//nothing
	}
	return 0;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int guess;
	int answer = kazuate();
	cout << "Guess the number between 1 - 100:";
	cin >> guess;

	while (guess != answer)
	{
		if (guess > answer)
		{
			cout << "Too big." << endl;
		}
		else
		{
			cout << "Too small." << endl;
		}

		cout << "Try again.";
		cin >> guess;
	}
	cout << "Congratulation! It is correct." << endl;
	return 0;
}