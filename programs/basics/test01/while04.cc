#include <iostream>
/*
* This is an example of a while loop
*/

int main () {
	int sum = 0, val = 0;
	// Keeps executing while as long as val is 
	// less than or equal to 10

	std::cout 
		<< "Enter the numbers you want to add. "
		<< "Then hit ctrl-d. "
		<< std::endl;

	while ( std::cin >> val ) {
		sum += val;

	}
	std::cout << "Sum is " << sum << std::endl;

	return 0;

}