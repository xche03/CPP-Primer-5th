/*Exercise 2.7: What values do these literals represent? What type does each
have?
(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L
(c) 1024f
(d) 3.14L
*/

#include <iostream>
using namespace std;

int main()

{
	cout << "Who goes with F\145rgus?\012";
	cout << 3.14e1L <<endl;//long double
	cout << 1024.f << endl; //It is an error without the decimal point.
	cout << 3.14L << endl;//long double

	system("PAUSE");
	return 0;
}