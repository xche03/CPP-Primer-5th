#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; // read a pair of transactions
	std::cout << item1<< std::endl<<item2 << std::endl; // print their sum
	system("PAUSE");
	return 0;
}