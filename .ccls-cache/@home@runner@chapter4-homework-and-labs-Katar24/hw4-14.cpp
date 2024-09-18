/*Intermediate14.cpp - displays total sold and percentages of small, medium,large, and family sold 
Created/revised by <CooperKR> on <9-12-24>*/

#include <iostream>
using namespace std;

/******************************************************
 ** This Program Displays Total Sold and Percentages **
 ******************************************************/

int main() 
{ // start main function
// Declare Variables
	int small = 0;
		std::cout << "Enter Number of Small Pizzas: \n";
		std::cin >> small;
	int med = 0;
		std::cout << "Enter Number of Medium Pizzas: \n";
		std::cin >> med;
	int large = 0;
		std::cout << "Enter Number of Large Pizzas: \n";
		std::cin >> large;
	int family = 0;
		std::cout << "Enter Number of Family Pizzas: \n";
		std::cin >> family;
	double total = 0;
	double percentS = 0.0;
	double percentM = 0.0;
	double percentL = 0.0;
	double percentF = 0.0;

// Calculate and Display
	total = small + med + large + family;
	percentS = ((double)small / total) * 100;
	percentM = (med / total) * 100;
	percentL= (large / total) * 100;
	percentF = (family/ total) *100;
		std::cout << "Total sold: " << total << endl;
		std::cout << "Small: " << percentS << "% Medium: " << percentM << "% Large: " << percentL << "% Family: " << percentF << "%\n";
  return 0; } // end of main function