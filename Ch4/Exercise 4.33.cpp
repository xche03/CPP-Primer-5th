/*
Exercise 4.33: Using Table 4.12 (p. 166) explain what the following
expression does:
Click here to view code image
someValue ? ++x, ++y : --x, --y
*/

#include <iostream>
using namespace std;

int main() {

	int x = 9, y = 3;
	//Since comma has the lowest precedence, --x will bind more closely to the conditional operator. So the expression can be written as:
	cout << ((false ? ++x, ++y : --x), --y)<<endl;
	//The above expression will always return y as lvalue. But the value of y can be modified by the conditional expression.

	system("PAUSE");
	return 0;  
}