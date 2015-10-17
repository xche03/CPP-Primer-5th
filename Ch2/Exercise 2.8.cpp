/*Exercise 2.8: Using escape sequences, write a program to print 2M followed
by a newline.Modify the program to print 2, then a tab, then an M, followed
by a newline.*/

#include <iostream>
using namespace std;
int main() {
	cout << "2M" "\n";
	cout << "2" "\t" "M" "\n";
	system("PAUSE");

	return 0;
}