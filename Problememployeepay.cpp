// Problem 3 (employeepay):
// An employee is paid at a rate of $16.00 per hour for regular hours worked
// in a week. Any hours over that are paid at the overtime rate of one and
// one-half times that. From the worker’s gross pay, 6% is withheld for Social
// Security tax, 14% is withheld for federal income tax, 5% is withheld for
// state income tax, and $10 per week is withheld for medical insurance.
// Write a program that will read in the number of hours worked in a week
// as input and that will then output the worker’s gross pay, each withholding
// amount, and the net take-home pay for the week.

// a. Cady Stringer
// b. 2319436
// c. cstringer@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv){
  //wages and pay
  double hourlyRate = 16.0;
  double overtimeRate = 16.0 * 1.5;
  double hoursWorked;
  double totalPay;

  cout << "Enter the number of hours the employee worked this week: " << endl;
  cin >> hoursWorked;

  //calculating total pay with overtime and regular time
  if(hoursWorked <= 40){
    totalPay = hoursWorked * hourlyRate;
  } else {
    totalPay = 40 * hourlyRate;
    totalPay += (hoursWorked - 40) * overtimeRate;
  }

  //amount witheld calculations
  double medicalInsurance = 10.0;
  double ss_withheld = 0.06 * totalPay;
  double federal_withheld = 0.14 * totalPay;
  double state_withheld = 0.05 * totalPay;
  double netPay = totalPay - (ss_withheld + federal_withheld + state_withheld + medicalInsurance);

  //print statements
  cout << "Gross pay: " << totalPay << endl;
  cout << "Amount withheld for social security: $" << ss_withheld << endl;
  cout << "Amount withheld for federal taxes: $" << federal_withheld << endl;
  cout << "Amount withheld for state taxes: $" << state_withheld << endl;
  cout << "Amount withheld for medical insurance: $" << medicalInsurance << endl;
  cout << "Net take-home pay: " << netPay << endl;

  return 0;
}
