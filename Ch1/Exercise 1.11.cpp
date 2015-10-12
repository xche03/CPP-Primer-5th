/*Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/
#include <iostream>
int main() {
	int a = 0, b = 0; //two numbers
	int start = 0, end = 0;
	std::cout << "Please input two numbers:" << std::endl;
	std::cin >> a >> b;
	//Force that start is always no more than end
	if (a >= b) { start = b; end = a; }
	else { start = a; end = b; }

	int val = start;
	while (val <= end) {
	
		std::cout << val++ << " ";
	
	}
    std::cout << std::endl;
	system("PAUSE");
}