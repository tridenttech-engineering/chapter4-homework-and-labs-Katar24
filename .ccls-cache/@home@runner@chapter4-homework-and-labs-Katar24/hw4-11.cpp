// Introductory11.cpp - displays ending balance
// Created/revised by <CooperKR> on <9-12-2024>
#include <iostream>
using namespace std;

/***************************************
 ** This Program Bank Account Balance **
 ***************************************/

int main() {// start main function
// Declare Variables //
  double startBal = 0.0;
    std::cout << "Enter Beginning Balance: $\n";
    std::cin >> startBal;
  double deposits = 0.0;
    std:: cout <<"Enter Deposits: $\n";
    std::cin >> deposits;
  double withdrawals = 0.0;
    std::cout << "Enter Withdrawals: $\n";
    std::cin >> withdrawals;
  double totalBal = 0.0;

// Calculate Sales Tax and Display and Total Cost //
totalBal = (startBal + deposits) - withdrawals;
    std::cout << "The Total Balance is: $" << totalBal << endl;
return 0; } // end of main function