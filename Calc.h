#pragma once
#include<iostream>
#include<string.h>
using namespace std;

void DisplayTitle(string anyTitle)       // This function displays title
{
	for (short i = 0; i < anyTitle.length(); i++) // This loop converts string into Upper case
	{
		anyTitle[i] = toupper(anyTitle[i]);
	}
	cout << "\t\t" << anyTitle << "\n\t\t";
	for (short i = 0; i < anyTitle.length(); i++) // This function puts underline below the title
	{
		cout << "-";
	}
	cout << "\n\n";
}

float readNumber(int counter) // This function reads values
{
	float number; // This variable stores value for operation 
	cout << "Enter Value "<<counter<<": ";
	cin >> number;
	return number;
}

void displayResult(float result) // This function Displays result of all function 
{
	cout << "The result is: " << result<<endl;
}

void addition() // This function adds values
{
	system("cls");
	int NoV, sum, result=0;
	DisplayTitle("Calculator");
	DisplayTitle("Additioni");
	cout << "Enter number of values to add: ";
	cin >> NoV;
	for (short i = 0; i < NoV; i++) // this loop adds values entered by user
	{
		sum = readNumber(i+1);
		result += sum;
	}
	displayResult(result);

}

void substraction() // This function substracs values
{
	system("cls");
	float result, v1, v2;
	DisplayTitle("Calculator");
	DisplayTitle("Substraction");
	v1 = readNumber(1);
	v2 = readNumber(2);

	result = v1 - v2;
	displayResult(result);
}

void multiplication() // This function multiplys values
{
	system("cls");
	int NoV, mul, result = 1;
	DisplayTitle("Calculator");
	DisplayTitle("Multiplication");
	cout << "Enter number of values to Multiply: ";
	cin >> NoV;
	for (short i = 0; i < NoV; i++) // this loop Multiplys values entered by user
	{
		mul = readNumber(i + 1);
		result *= mul;
	}
	displayResult(result);
}

void division() // This function divides values
{
	system("cls");
	float result, v1, v2;
	DisplayTitle("Calculator");
	DisplayTitle("Division");
	v1 = readNumber(1);
	do {                             // This loop makes sure that user has not enterd 0 as a dividor
		v2 = readNumber(2);
	} while (v2 == 0);
	result = v1 / v2;
	displayResult(result);
}

char checkDecision() // This function checks for decision if user wants to do more calculation 
{
	char YoN;

	do {
		cout << "Would you like to do another Division?(Y-N): ";
		cin >>YoN;
	} while (YoN != 'y' && YoN != 'Y' && YoN != 'n' && YoN != 'N');
	return YoN;
}   