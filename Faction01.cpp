#include <iostream>
#include <time.h>
using namespace std;


bool checkN(int random, int e);
void main()
{
	srand((unsigned int)time(NULL));

	int random = 1 + (rand() % 9);
	int value;
	int count = 0 ;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;

	do
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> value;
		count++;
	} while (!checkN(random, value));

	cout << "The secret number is : " << random << endl;
	cout << "You made " << count << " guesses" << endl;

	system("PAUSE");
}


bool checkN(int random, int e)
{
	if (e < random)
	{
		cout << "The secret number is lower." << endl;
		return false;
	}
	else if (e > random)
	{
		cout << "The secret number is higher." << endl;
		return false;
	}
	else if (e == random)
	{
		cout << "Congratulations!!!" << endl;
		return true;
	}
	return false;
}