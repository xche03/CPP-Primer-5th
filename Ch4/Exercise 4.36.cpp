/*
Exercise 4.36: Assuming i is an int and d is a double write the
expression i *= d so that it does integral, rather than floating-point,
multiplication.
*/
#include <iostream>
using namespace std;
int main() {

	int i = 5;
	double d = 3.21;
	i *= d;
	cout << i << endl;
	i = 5;
	i *= static_cast <int> (d);
	cout << i << endl;
	system("PAUSE");
	/*static_cast An explicit request for a well-defined type conversion. Often used to
override an implicit conversion that the compiler would otherwise perform.*/

}