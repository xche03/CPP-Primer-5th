/*Exercise 3.5: Write a program to read strings from the standard input,
concatenating what is read into one large string. Print the concatenated
string. Next, change the program to separate adjacent input strings by a
space.*/

#include <iostream>
#include <string>
using namespace std;
int main() {

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	string s3 = s1 + s2;
	cout << s3 << endl;
	string s4 = s1 + " " + s2;
	cout << s4 << endl;

	system("PAUSE");
	return 0;
}