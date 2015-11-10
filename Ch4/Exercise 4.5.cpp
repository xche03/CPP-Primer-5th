/*Exercise 4.5: Determine the result of the following expressions.
(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4*/

#include <iostream>
using namespace std;

int main() {


	cout << -30 * 3 + 21 / 5 << endl; //-86

	cout << -30 + 3 * 21 / 5 << endl;//-18

	cout << 30 / 3 * 21 % 5 << endl;//0

	/*The modulus operator is defined so that if m and n are integers and n is nonzero,
then (m/n)*n + m%n is equal to m.*/
	cout << -30 / 3 * 21 % 4 << endl;//-2

	system("PAUSE");
	return 0;
}