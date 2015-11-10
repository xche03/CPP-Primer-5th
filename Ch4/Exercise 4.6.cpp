/*Exercise 4.6: Write an expression to determine whether an int value is
even or odd.*/

#include <iostream>
using namespace std;

int main() {

	cout << "Please input an integer: " << endl;
	int i;
	if (cin >> i) {
	
		if (i % 2 == 0) {
			cout << "The number is even." << endl;
		
		}

		else {
		
			cout << "The number is odd." << endl;
		
		}
	
	
	}

	

	system("PAUSE");
	return 0;
}