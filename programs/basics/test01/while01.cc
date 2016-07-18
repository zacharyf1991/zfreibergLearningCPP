#include <iostream>
/*
* This is an example of a while loop
*/

int main () {
	int sum = 0, val = 50;
	// Keeps executing while as long as val is 
	// less than or equal to 10

	while ( val <= 100 ) {
		sum += val;
		++val;

	}
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;

	return 0;

}