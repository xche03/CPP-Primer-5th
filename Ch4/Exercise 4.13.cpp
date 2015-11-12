/*Exercise 4.13: What are the values of i and d after each assignment?
int i; double d;
(a) d = i = 3.5;
C++ Primer, Fifth Edition
(b) i = d = 3.5;*/
#include <iostream>
using namespace std;
int main() {

	int i1, i2;
	double d1, d2;

	d1 = i1 = 3.5;
	cout << i1 << " " << d1 << endl;


	i1 = d1 = 3.5;
	cout << i1 << " " << d1 << endl;

	system("PAUSE");
	return 0;




}