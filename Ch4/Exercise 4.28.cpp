/*Exercise 4.28: Write a program to print the size of each of the built-in
types.*/

#include <iostream>

using namespace std;

int main() {
	cout << "The size of " "int" " is "  <<sizeof(int) <<"."<<endl;
	cout << "The size of " "char" " is " << sizeof(char) << "." << endl;
	cout << "The size of " "double" " is " << sizeof(double) << "." << endl;
	cout << "The size of " "float" " is " << sizeof(float) << "." << endl;
	cout << "The size of " "bool" " is " << sizeof(bool) << "." << endl;
	cout << "The size of " "long long" " is " << sizeof(long long) << "." << endl;
	cout << "The size of " "wchar_t" " is " << sizeof(wchar_t) << "." << endl;
	cout << "The size of " "long double" " is " << sizeof(long double) << "." << endl;

	system("PAUSE");
	return 0;
}