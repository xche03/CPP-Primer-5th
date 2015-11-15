/*
Exercise 4.23: The following expression fails to compile due to operator
precedence. Using Table 4.12 (p. 166), explain why it fails. How would you
fix it?
Click here to view code image
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	// + has higher precedence than ==. Comparing string with char is an error

	cout << pl << endl;

	system("PAUSE");
	return 0;
}