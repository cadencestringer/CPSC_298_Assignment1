// Problem 2 (firecapacity):
// Write a program that determines whether a meeting room is in violation of
// fire law regulations regarding the maximum room capacity.
// The program will read in the maximum room capacity and the number of
// people to attend the meeting. If the number of people is less than or equal
// to the maximum room capacity, the program announces that it is legal to
// hold the meeting and tells how many additional people may legally attend.
// If the number of people exceeds the maximum room capacity, the program
// announces that the meeting cannot be held as planned due to fire regulations
// and tells how many people must be excluded in order to meet the fire
// regulations.

// a. Cady Stringer
// b. 2319436
// c. cstringer@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

#include <iostream>
using namespace std;

int main (int argc, char **argv){
  //variable setup
  int maxRoomCapacity;
  int numPeople;

  //user inputs
  cout << "Enter the maximum room capacity: " << endl;
  cin >> maxRoomCapacity;

  cout << "Enter the number of people attending: " << endl;
  cin >> numPeople;

  //print statements depending on legality of meeting
  if(numPeople <= maxRoomCapacity){
    cout << "This is a legal meeting. Congratulations!" << endl;
    cout << "Legally, " << maxRoomCapacity - numPeople << " more people can attend." << endl;
  } else {
    cout << "This meeting cannot be held as planned due to fire regulations." << endl;
    cout << numPeople - maxRoomCapacity << " people need to be excluded in order to meet the fire regulations." << endl;
  }

  return 0;
}
