/*Exercise 4.10: Write the condition for a while loop that would read ints
from the standard input and stop when the value read is equal to 42.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int i=0;
	while (cin >> i && i != 42) {
		cout << "The interger is read in successfully and it is not 42!";
	
	}


	system("PAUSE");
	return 0;
}