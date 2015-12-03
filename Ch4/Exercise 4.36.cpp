/*
Exercise 4.36: Assuming i is an int and d is a double write the
expression i *= d so that it does integral, rather than floating-point,
multiplication.
*/
#include <iostream>
using namespace std;
int main() {

	int i = 5;
	double d = 0.0;
	i *= static_cast <int> (d);
	cout << i << endl;


}