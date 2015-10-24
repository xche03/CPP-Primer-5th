/*Exercise 3.3: Explain how whitespace characters are handled in the string
input operator and in the getline function.*/
#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	cout << s << endl;

	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
	system("PAUSE");
	return 0;
}