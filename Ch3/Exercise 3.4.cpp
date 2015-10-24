/*Exercise 3.4: Write a program to read two strings and report whether the
strings are equal.If not, report which of the two is larger.Now, change
the program to report whether the strings have the same length, and if
not, report which is longer.*/

#include <iostream>
#include <string>
using namespace std;
int main() {

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	if (s1 == s2) {
		cout << "same"<<endl;
	}
	else if (s1 > s2) {
		cout << "s1 is larger" << endl;
	}
	else {
	
		cout << "s2 is larger" << endl;
	}


	string s3, s4;
	getline(cin, s1);
	getline(cin, s2);

	if (s1.size() == s2.size()) {
		cout << "same length" << endl;
	}
	else if (s1.size() > s2.size()) {
		cout << "s1 is longer" << endl;
	}
	else {

		cout << "s2 is longer" << endl;
	}


	system("PAUSE");
	return 0;
}