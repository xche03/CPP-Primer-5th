/*Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
13) that printed a range of numbers so that it handles input in which the first
number is smaller than the second.*/
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