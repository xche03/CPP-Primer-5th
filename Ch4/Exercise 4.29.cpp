/*Exercise 4.29: Predict the output of the following code and explain your
reasoning.Now run the program.Is the output what you expected ? If not,
figure out why.
Click here to view code image
int x[10]; int *p = x;
cout << sizeof(x) / sizeof(*x) << endl;
cout << sizeof(p) / sizeof(*p) << endl;*/

#include <iostream>

using namespace std;

int main() {
	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;//The size of the int array over the size of int.
	cout << sizeof(p) / sizeof(*p) << endl; //The size of a pionter over the size of an int.

	cout << sizeof(p)<<endl;

	system("PAUSE");
	return 0;
}