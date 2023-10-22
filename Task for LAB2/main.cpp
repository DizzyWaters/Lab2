#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

// functions

int CaclulaceZ1(int input) 
{

}

int CaclulateZ2(int input) 
{
if (input == -2)

}

int main()
{
	// 1. Create an algorithm that calculates values z1 and z2 by formulas given in individual task*.
	//  Individual task number is being defined by formula: taskNr = studentCode % taskVarCount
	int taskVarCount = 20;
	int studentCode = 83655;
	int taskNr = studentCode % taskVarCount;
	cout << "Task number is: " << taskNr << endl;

	// task nr.15

	double userInput;
	double z1;
	double z2;

	cout << "\nPlease input value: ";
	cin >> userInput;
	cout << "\n" << userInput << endl;
	z1 = sqrt((2 * userInput) + (2 * sqrt(pow(userInput, 2) - 4))) / (sqrt(pow(userInput, 2) - 4) + userInput + 2);
	cout << "z1 is: " << z1 << endl;

	z2 = sqrt((1.0)/ (userInput + 2));
	cout << "z2 is: " << z2 << endl;




}