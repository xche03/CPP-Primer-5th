//Exercise 1.13: Rewrite the exercises from ¡ì 1.4.1 (p. 13) using for loops.
#include <iostream>
int main()
{
	int sum = 0;
	// keep executing the while as long as val is less than or equal to 10
	for (int val = 1; val <= 10;++val) {
		sum += val; // assigns sum + val to sum
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	system("PAUSE");
	return 0;
}