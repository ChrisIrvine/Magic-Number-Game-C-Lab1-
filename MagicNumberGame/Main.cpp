#include <iostream>;
#include <stdlib.h>;
using namespace std;

int main(int argc, char* argv[])
{
	/*Variables neeeded for the program*/
	int secretNumber, guessNumber, guessCounter;
	char play = 'y';



	/*While loop to control if the user wants to play the game again*/
	while (play == 'y')
	{	
		/*Set the counter to 0*/
		guessCounter = 0;

		/*Initialise the random number (between 1 and 10)*/
		secretNumber = rand() % 10 + 1;

		while (guessCounter < 3)
		{
			cout << "Guess the number (between 1 and 10)" << endl;
			cin >> guessNumber;
			if (guessNumber > secretNumber)
			{
				cout << "The secret number is lower" << endl;
				guessCounter++;
			}
			else if (guessNumber < secretNumber)
			{
				cout << "The secret number is higher" << endl;
				guessCounter++;
			}
			else if (guessNumber == secretNumber)
			{
				break;
			}
		}

		if (guessNumber == secretNumber && guessCounter < 3)
		{
			cout << "You guessed the number correctly. Congratulations!" << endl;
			cout << "Do you want to play again? y/n" << endl;
			cin >> play;
		}
		else
		{
			cout << "You ran out of guesses." << endl; 
			cout << "Do you want to play again? y/n" << endl;
			cin >> play;
		}
	}
}