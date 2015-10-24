/*Exercise 3.2: Write a program to read the standard input a line at a time.
Modify your program to read a word at a time.*/
#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	cout << s << endl;

	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2<<endl;
	system("PAUSE");
	return 0;
}