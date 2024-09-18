//Lab4-2.cpp - displays a salesperson's commission
//// Created/revised by <CooperKR> on <9-12-2024>

#include <iostream>
using namespace std;

/****************************************
 ** This Program Calculates Commission **
 ****************************************/

int main() { // start main function
  // Declare Sales and Commission Rate //
  double sales = 0.0;
    std::cout << "Enter Sales: $ \n";
    std::cin >> sales;
  const double commRate = 0.1;

  // Calculate and Display Commission //
  double commPay = 0.0;
    commPay = sales * commRate;
      std::cout << "Commission Pay: $" << commPay << endl;

  // Calculate and Display Total Pay //
  double totalPay = 0.0;
    totalPay = commPay + sales;
      std::cout << "Total Pay: $" << totalPay << endl;

return 0; } //end of main function

/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/