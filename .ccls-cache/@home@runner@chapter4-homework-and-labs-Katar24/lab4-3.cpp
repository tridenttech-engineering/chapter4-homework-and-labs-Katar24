//Lab4-3.cpp - displays a salesperson's commission
// Created/revised by <CooperKR> on <9-12-2024>

#include <iostream>
using namespace std;

/****************************************************
 ** This Program Calculates Sales Tax and Displays **
 ****************************************************/

int main() { // start main function
  // Declare Sales and Commission Rate //
  double sales = 0.0;
    std::cout << "Enter Sales (Dollars): \n";
    std::cin >> sales;
  double commRate = 0.0;
    std::cout << "Enter Commission Rate as a Decimal: \n";
    std::cin >> commRate;

  // Calculate and Display Commission //
  double commPay = 0.0;
    commPay = sales * commRate;
      std::cout << "Commission Pay: $" << commPay << endl;

  // Calculate and Display Total Pay //
  double totalPay = 0.0;
    totalPay = commPay + sales;
      std::cout << "Total Pay: $" << totalPay << endl;
return 0; } //end of main function