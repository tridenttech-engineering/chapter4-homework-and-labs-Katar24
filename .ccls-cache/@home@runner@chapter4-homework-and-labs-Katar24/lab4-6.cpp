//Lab4-6.cpp - displays the area of a triangle
// Created/revised by <CooperKR> on <9-12-2024>
#include <iostream>
using namespace std;

/****************************************************
 ** This Program Calculates the Area of a Triangle **
 ****************************************************/
	
int main() { // start main function
	// Declare Variables //
	double base = 13.0;
	double height = 11.0;
	double area = 0.0;

	// Calculate and Display Area //
	area = base * height / 2;
	cout << "Area: " << area << " Units Squared\n";
return 0; }	//end of main function