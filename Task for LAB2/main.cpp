#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// 1. Create an algorithm that calculates values z1 and z2 by formulas given in individual task*.
	//  Individual task number is being defined by formula: taskNr = studentCode % taskVarCount
	int taskVarCount = 20;
	int studentCode = 83655;
	int taskNr = studentCode % taskVarCount;
	cout << "Task number is: " << taskNr << endl;

	// task nr.15

	double arr[] = { -7834, -2 , 0 , 2 , 4387 };
	int input;
	double z1;
	double z2;
	double denominator;

	// to not get c2124 
	for (int i = 0; i < 5; i++) 
	{
		input = arr[i];
		cout << "\ninput value is: " << arr[i];
		
		denominator = (sqrt(pow(input, 2) - 4) + input + 2);
		
		if (denominator == 0)
			cout << "\nExeption: Can not divide by zero." << endl;
		else
		{
			z1 = sqrt((2 * input) + (2 * sqrt(pow(input, 2) - 4))) / denominator;
			cout << "\nz1 is: " << z1 << endl;
		}

		denominator = sqrt(input + 2);
		
		if (denominator == 0)
			cout << "Exeption: Can not divide by zero.\n";
		else 
		{
			z2 = (sqrt(1) / denominator);
			cout << "z2 is: " << z2 << endl;
		}
	}



}