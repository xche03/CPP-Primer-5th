/*Exercise 3.40: Write a program to define two character arrays initialized
from string literals.Now define a third character array to hold the
concatenation of the two arrays.Use strcpy and strcat to copy the two
arrays into the third.*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {

	char cs1[] = "Hello";
	char cs2[] = "Hello, guy!";
	char cs3[50];

	strcpy_s(cs3, cs1);
	strcat_s(cs3, cs2);
	
	system("PAUSE");
	return 0;
}