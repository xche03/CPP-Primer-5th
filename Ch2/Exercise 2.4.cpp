/*Exercise 2.3: What output will the following code produce ?
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;*/
/*Exercise 2.4: Write a program to check whether your predictions were
correct.If not, study this section until you understand what the problem is.*/
#include <iostream>
int main() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;//OK
	std::cout << u - u2 << std::endl;/*If we assign an out-of-range value to an object of unsigned type, the result is
the remainder of the value modulo the number of values the target type can
hold. For example, an 8-bit unsigned char can hold values from 0 through
255, inclusive. If we assign a value outside this range, the compiler assigns the
remainder of that value modulo 256. Therefore, assigning ¨C1 to an 8-bit
unsigned char gives that object the value 255.*/
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;//OK
	std::cout << i - i2 << std::endl;//OK
	std::cout << i - u << std::endl;//Signed and unsigned types are mixed. But 0 won't be converted.
	std::cout << u - i << std::endl;//OK
	system("PAUSE");
	return 0;

}
