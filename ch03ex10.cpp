/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gabrielle Jackson
 */

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main(){
	//declaring variables
	string operator;
	double x = 0;
	double y = 0;
	double solution = 0;
	
	//ask the user for an operator and 2 numbers
	cout << "Please enter an operator (+, -, *, /, plus, minus, mul, div)\n" << "followed by two operands\n";
	
	//determines the values of the operators and numbers
	while (cin >> operator >> x >> y) {
		if (operator == "+" || operator == "plus") solution = x + y;
		else if (operator == "-" || operator == "minus") solution = x - y;
		else if (operator == "*" || operator == "mul") solution = x * y;
		else if (operator == "/" || operator == "div"){
			if (y == 0){
				operator = "divzero";
			}else{
				solution = x / y;
			}	
		}
		
		else operator = "unknown";
		if (operator == "unknown"){
			cout << "I don't know this operator!\n";
		}
		else if (operator == "divzero"){
			cout << "No division by zero!\n";
		}else{
			cout << x << ' ' << operator << ' ' << y << " = " << solution << '\n';
		cout << "Try again\n";
		}
	}
	return 0;
}//end of main