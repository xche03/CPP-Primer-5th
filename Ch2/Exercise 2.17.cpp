/*Exercise 2.17: What does the following code print ?
Click here to view code image
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;*/

#include <iostream>

int main() {

	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl; //output: 10 10
	system("PAUSE");
	return 0;

}