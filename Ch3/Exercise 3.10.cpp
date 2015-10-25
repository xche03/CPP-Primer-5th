/*Exercise 3.10: Write a program that reads a string of characters including
punctuation and writes what was read but with the punctuation removed.*/


#include <iostream>
#include <string>
using namespace std;

int main() {

	string s("Hello World!!!");
	string result;
	
	
	for (auto c : s) // for every char in s
		if (!ispunct(c)) // if the character is punctuation
			result+=c; // increment the punctuation counter
	
	cout << result << endl;
	system("PAUSE");
	return 0;
}
