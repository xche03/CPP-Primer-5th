/*
Exercise 4.34: Given the variable definitions in this section, explain what
conversions take place in the following expressions:
(a) if (fval)
(b) dval = fval + ival;
(c) dval + ival * cval;
*/

#include <iostream>
using namespace std;

int main() {
	bool flag=true; char cval='c';
	short sval=0; unsigned short usval=0;
	int ival=0; unsigned int uival=0;
	long lval=0; unsigned long ulval=0;
	float fval=0.0; double dval=0.0;
	
	if (fval) {};//fval is converted to bool;
	cout << "sizeof(fval): " <<sizeof(fval) << endl;
	cout << "sizeof(ival): " << sizeof(ival) << endl;
	dval = fval + ival;//ival is converted to float first, and then the result is converted to double
	dval + ival * cval;//cval is converted to int first, and the results is converted to double.


	system("PAUSE");
	return 0;
}