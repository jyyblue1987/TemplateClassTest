//testMain.cpp
// testing the implementation of class varArray
// Assignment 3.  Dr. Alnaeli, Stout 
//testMain.cpp
#include <iostream>
#include <string>
#include "varList.h"
using namespace std;

int main() {
	cout << "Here is an example program dialog, assuming the list created to hold integer values:" << endl << endl;

	VarList<int> intList;

	char command = 'A';
	int val = 0;
	while(true) {
		cout << "Enter operation [A/R/Q]: ";
		cin >> command;

		if( command == 'Q' )
			break;

		if( command == 'A' || command == 'R' )
		{
			cout << endl << "Enter a value                : ";
			cin >> val;
		}
		else
			continue;

		if( command == 'A' )
			intList.addValue(val);
		if( command == 'R' )
			intList.removeValue(val);

		cout << endl << "Current values stored in the list: ";
		intList.printList();
		cout << endl << endl << endl;

	}
	return 0;
} 

