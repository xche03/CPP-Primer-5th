/*Exercise 4.11: Write an expression that tests four values, a, b, c, and d,
and ensures that a is greater than b, which is greater than c, which is
greater than d.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int a = 10, b=9,c=8,d=7;
	if (a > b && b > c && c > d) {
	 
		cout << "a>b>c>d" << endl;
	
	}



	system("PAUSE");
	return 0;
}