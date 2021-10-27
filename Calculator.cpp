#include<iostream>
#include"Calc.h"                   // To include header file which contains functions

int main()                        // Starting point of the program
{
	int answer, choice;
	char YoN;

	do {                                   
		system("cls");
		DisplayTitle("calculator");
		DisplayTitle("By IKramhusen Tai");
		cout << "1. Addition \n";
		cout << "2. Subtraction \n";
		cout << "3. Multiplication \n";
		cout << "4. Division \n";
		cout << "5. Quit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)             // Switch case used to show choices to user and take one
		{
		case 1:
			system("cls");           // to clear screen
			do {
				addition();
				YoN = checkDecision();
			} while (YoN == 'Y' || YoN == 'y');
			break;
		case 2:
			system("cls");
			do {
				substraction();
				YoN = checkDecision();
				} while (YoN == 'Y' || YoN == 'y');
				break;
		case 3:
			system("cls");
			do {
				multiplication();
				YoN = checkDecision();
				} while (YoN == 'Y' || YoN == 'y');
				break;
		case 4:
			system("cls");
			do {
				division();
				YoN = checkDecision();
			} while (YoN == 'Y' || YoN == 'y');
				break;
		}

	} while (choice != 5);
	return 0;
}