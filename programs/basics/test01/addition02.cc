#include <iostream>
int main() 
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "Number 1: " << v1 << std::endl;
	std::cout << "Number 2: " << v2 << std::endl;
	std::cout << "Sum: " << v1 + v2 << std::endl;
	return 0;
}
