//============================================================================
// Name        : First.cpp
// Author      : Robert J Krasowski
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int printTest(string);
double lotery(int,double);

int  main() {


	double first = 4;
	double second = 3;
	double result = first/second;
	string number;


	cout << "Enter number: "<< endl;
	cin >> number;

	cout << "\nResult  is: " << result<< endl;

	printTest(number);

	return 0;

}

int printTest(string number) {

	cout << "Number passed to function is: "<< number << endl;
	return 0;

};

lotery(int n, double m){

}
