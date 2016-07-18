#include <iostream>
/*
* This is an example of a while loop
*/

int main () {
	int fromVal = 0, toVal = 0;
	int sum = 0, val = 20;


	std::cout << "Enter two numbers (Make the first smaller than the second ):" << std::endl;
	std::cin >> fromVal >> toVal;
	// Keeps executing while as long as val is 
	// less than or equal to 10

	while ( fromVal <= toVal ) {
		fromVal += toVal;
		toVal++;

	}
	std::cout << "Sum of " << fromVal 
		<< " to " << 0 << " inclusive is "
		<< fromVal << std::endl;

	return 0;

}