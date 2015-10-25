/*Exercise 3.8: Rewrite the program in the first exercise, first using a while
and again using a traditional for loop. Which of the three approaches do
you prefer and why?*/
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
	decltype(s.size()) index = 0;
	if (!s.empty()) {
		while (index < s.size()) {
			s[index] = 'X';
			++index;
		}
	
	}

	cout << s << endl;

	string s1 = "some thing some thing";
	
	if (!s1.empty()) {
		for (decltype(s1.size()) index = 0; index < s1.size();++index) {
			s1[index] = 'X';
		}

	}
	cout << s1 << endl;
	system("PAUSE");
	return 0;
}