#include <iostream>
/*
* This program will ask the user for two values,
* it will then calculate the sum of all the 
* values between x1 and x2
*/

int main () {
	// Values from and to
	int valueFrom = 0, valueTo = 0;
	int sum = 0;

	std::cout << "Please input two values"
		<< std::endl;
	std::cin >> valueFrom >> valueTo;

	for ( int i = valueFrom; i <= valueTo; ++i)
		sum += i;


	std::cout << "The total value is " << sum 
		<< std::endl;	


	return 0;
}