#include <iostream>

using namespace std;

/* This project is incomplete..please collaborate your skills into it by trying to complete it...Thanks */

int main() {
	float x, y, sum, diference, division, multiplication; 
	char option;
	
	cout << "Welcome to my calculator\n" << endl;
	cout << "Please choose from the followng menu\n" << endl;
	cout << "> a) - Adding\n" << endl;
	cout << "> b) - Subtraction\n" << endl;
	cout << "> c) - Division\n" << endl;
	cout << "> d) - Multiplication\n" << endl;
	cout << "> e) - Modulus\n" << endl;
	cout << "> f) - Exiting" << endl;
	cin >> option;
	
	if(option == 'a')
	{
		
		cout << "Enter first value : " << endl;
		cin >> x;
		cout << "Enter second value : " << endl;
		cin >> y;
		system("cls");
		sum = x + y;
		cout << "Answer is " << sum << endl;
	}
	
	return 0;
}
