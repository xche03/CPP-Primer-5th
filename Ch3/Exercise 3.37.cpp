/*Exercise 3.37: What does the following program do ?
const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
const char *cp = ca;
while (*cp) {
	cout << *cp << endl;
	++cp;
}*/

#include <iostream>
using namespace std;
int main() {
	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp; //The program intends to display the string stored in constant char array ca. Since the array is NOT null-terminated, the output leads to unexpected results.
	}
		system("PAUSE");
		return 0;

}