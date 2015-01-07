#include "stdafx.h"
#include <time.h>
#include <iostream>
using namespace std;

int score = 0;
int main()
{
	int guess, numb, upbound, lowbound;
	upbound = 100;
	lowbound = 1;
	char request;
	bool pass = false;
	srand( time(NULL) );
	numb = rand() % 100 + 1;
	
	do {
		cout << "Chosse a number between " << lowbound << " and " << upbound << " : ";
		cin >> guess;
		score += 1;
			if (guess > numb){
				cout << "Too large! \n";
				upbound = --guess;
				pass = false;	
			}else if (guess < numb){
				cout << "Too small! \n";
				pass = false;
				lowbound = ++guess;
			}else if (guess == numb){
				pass = true;
			}else{
				cout << "Please a number!";
				pass = false;
			}
	} while (!pass);
	cout << "You have done it! " << numb << " is the number! \n" << "Your score is: " << score << " points! \n";
	cout << "Do you want to play again? \n" << "Type Y as a Yes or N to exit the program! \n";
	cin >> request;
	if (request == 89){
		main();
	}else{
		return 0;
	}
}