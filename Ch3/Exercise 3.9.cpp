/*Exercise 3.9: What does the following program do ? Is it valid ? If not, why
not?
string s;
cout << s[0] << endl;*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cout << s[0] << endl;


	system("PAUSE");
	return 0;
}

/*Caution: Subscripts are Unchecked
When we use a subscript, we must ensure that the subscript is in range. That
is, the subscript must be >= 0 and < the size() of the string. One way
to simplify code that uses subscripts is always to use a variable of type
string::size_type as the subscript. Because that type is unsigned, we
ensure that the subscript cannot be less than zero. When we use a
size_type value as the subscript, we need to check only that our subscript
is less than value returned by size().
Warning
The library is not required to check the value of an subscript. The result
of using an out-of-range subscript is undefined.*/