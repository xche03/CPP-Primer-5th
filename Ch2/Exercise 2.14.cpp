/*Exercise 2.14: Is the following program legal? If so, what values are printed?
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;*/

#include <iostream>
using namespace std;
int main() {

	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i) //local i will be out of scope after the loop
		sum += i;
	std::cout << i << " " << sum << std::endl; //output: 100 45
	system("PAUSE");
	return 0;


}