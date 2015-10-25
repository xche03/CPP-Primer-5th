/*Exercise 3.11: Is the following range for legal ? If so, what is the type of
c ?
Click here to view code image
const string s = "Keep out!";
for (auto &c : s) {  }*/


#include <iostream>
#include <string>
using namespace std;

int main() {

	const string s = "Keep out!";
	for (auto &c : s) {
		//It is legal. The type of c is const char &
	}
	
	system("PAUSE");
	return 0;
}
