/*Exercise 3.7: What would happen if you define the loop control variable in
the previous exercise as type char? Predict the results and then change your
program to use a char to see if you were right.*/
/*Exercise 3.6: Use a range for to change all the characters in a string to
X.*/


#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "some thing";
	for (char &c : s) {
		c = 'X';
	}
	cout << s << endl;
	system("PAUSE");
	return 0;
}