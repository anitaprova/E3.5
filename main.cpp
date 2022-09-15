/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework E3.5
 * The program take 3 integers and tells you whether its increasing or not
 * */

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the first integer: ";
	int num1;
	cin >> num1;

	cout << "Enter the second integer: ";
	int num2;
	cin >> num2;

	cout << "Enter the third integer: ";
	int num3;
	cin >> num3;

	if(num1 < num2 && num2 < num3){
		cout << "Increasing" << endl;
	}
	else if (num1 > num2 && num2 > num3)
	{
		cout << "Decreasing" << endl;
	}
	else {
		cout << "Neither" << endl;
	}

	return 0;
}
