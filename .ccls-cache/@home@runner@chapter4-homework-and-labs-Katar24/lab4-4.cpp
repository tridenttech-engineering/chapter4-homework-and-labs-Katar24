//Lab4-4.cpp - displays the volume of a cylinder
// Created/revised by <CooperKR> on <9-12-2024>
#include <iostream>
using namespace std;

/******************************************************
 ** This Program Calculates the Volume of a Cylinder **
 ******************************************************/

int main() { //start main function
  // Declare Height, Radius, Pi //
    double height = 0.0;
      std::cout << "Enter Height: \n";
      std::cin >> height;
    double radius = 0.0;
      std::cout << "Enter Radius: \n";
      std::cin >> radius;
    const double pi = 3.14159;
    double volume = 0.0;

  // Calculate and Display Volume //
    volume = pi * radius * radius * height;
      std::cout << "The Volume is: " << volume << " Units Cubed\n";
return 0; } //end of main function