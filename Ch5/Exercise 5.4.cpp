//Exercise 5.4: Explain each of the following examples, and correct any problems you detect.
//(a) while (string::iterator iter != s.end()) { /* . . . */ }
//(b) while (bool status = find(word)) { /* . . . */ }
//if (!status) { /* . . . */ }

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "Hello";
	//in while (string::iterator iter != s.end()) { /* . . . */ }, iter is not properly initialized.
	string::iterator iter = s.begin();
	while (iter != s.end()) { ++iter; }


	//status is out of scope.
	// while (bool status = find(word)) { /* . . . */ }
    //if (!status) { /* . . . */ }
	while (bool status = s.find("o")) {
		if (!status) { /* . . . */ }
	
	}

	system("PAUSE");

}