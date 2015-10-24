/*Exercise 3.1: Rewrite the exercises from ¡ì 1.4.1 (p. 13) and ¡ì 2.6.2 (p. 76)
with appropriate using declarations.*/

/*Exercise 1.9: Write a program that uses a while to sum the numbers from
50 to 100.*/
#include <iostream>
using std::cout;
int main()
{
	int sum(0);
	int val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}

	cout << "The sum of the numbers from 50 to 100 is "
		<< sum
		<< std::endl;
	system("PAUSE");

}