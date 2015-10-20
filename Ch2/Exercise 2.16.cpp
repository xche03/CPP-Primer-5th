/*Exercise 2.16: Which, if any, of the following assignments are invalid? If
they are valid, explain what they do.
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d;*/

#include <iostream>
using namespace std;
int main() {

	int i = 0, &r1 = i; double d = 0, &r2 = d;
	r2 = 3.14159;//OK: the value of d will changed.
	r2 = r1; //OK: the value of d will be changed to 0.
	cout << r2 << endl;
	i = r2;//ok:value i will be changed to 0;
	r1 = d;//OK: 

	system("PAUSE");
	return 0;

}