#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	//read ISBN, num sold, price
	std::cin >> book;
	//print book
	std::cout << book << std::endl;
	return 0;
}

// #include <iostream>
// #include "Sales_item.h"
// int main()
// {
//     Sales_item book;
//     // read ISBN, number of copies sold, and sales price
//     std::cin >> book;
//     // write ISBN, number of copies sold, total revenue, and average price
//     std::cout << book << std::endl;
//     return 0;
// }
