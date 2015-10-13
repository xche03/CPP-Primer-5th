/*Exercise 1.16: Write your own version of a program that prints the sum of
a set of integers read from cin.*/
#include <iostream>
int main()
{
	int sum = 0, value = 0;
	// read until end-of-file, calculating a running total of all values read
	while (std::cin >> value)
		sum += value; // equivalent to sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}