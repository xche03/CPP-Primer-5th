/*
Exercise 4.35: Given the following definitions,
char cval; int ival; unsigned int ui;
float fval; double dval;
identify the implicit type conversions, if any, taking place:
(a) cval = 'a' + 3;
(b) fval = ui - ival * 1.0;
(c) dval = ui * fval;
(d) cval = ival + fval + dval;
*/



#include <iostream>
using namespace std;

int main() {
	
	char cval='c'; int ival=0; unsigned int ui=0;
	float fval=0.0; double dval=0.0;
	
	cval = 'a' + 3;//'a' is converted to int first, then the result is converted to char.
	fval = ui - ival * 1.0;//More generally, in expressions that mix floating-point and integral values, the integral value is converted to an appropriate floating-point type.
	                       //ival is converted to double first, then ui is converted to doulbe. The results is converted to float.
	dval = ui * fval;//ui is converted to float first, and then the result is converted to double.
	cval = ival + fval + dval;// ival is converted to fval, and then the sum of ival and fval is converted to double, and then the result is converted to char.
	system("PAUSE");
	return 0;
}