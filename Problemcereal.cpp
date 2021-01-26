// Problem 1 (cereal):
// A metric ton is 35,273.92 ounces. Write a program that will read the
// weight (console input) of a package of breakfast cereal in ounces and
// output the weight in metric tons as well as the number of boxes needed
// to yield one metric ton of cereal.

// a. Cady Stringer
// b. 2319436
// c. cstringer@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv){
  double weightOz;
  double weightMetricTons;
  double numBoxesNeeded;

  cout << "Enter weight of cereal in ounces: " << endl;
  cin >> weightOz;
  weightMetricTons = weightOz * (1.0/35273.92);
  cout << "Weight of cereal in metric tons: " << weightMetricTons << endl;
  numBoxesNeeded = 1.0/weightMetricTons;

  cout << "Technically, we'd need " << numBoxesNeeded << " to reach one metric ton of cereal." << endl;
  cout << "Since we can't have only part of a box of cereal, we'd need " << ceil(numBoxesNeeded) << " full boxes of cereal." << endl;

  return 0;
}
