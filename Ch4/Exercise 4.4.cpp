/*Exercise 4.4: Parenthesize the following expression to show how it is
evaluated. Test your answer by compiling the expression (without
parentheses) and printing its result.
Click here to view code image
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2*/

#include <iostream>
using namespace std;

int main() {


	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;

	cout << (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2) << endl;

	system("PAUSE");
	return 0;
}