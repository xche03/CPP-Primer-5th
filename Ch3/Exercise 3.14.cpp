/*Exercise 3.14: Write a program to read a sequence of ints from cin and
store those values in a vector.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<int> vi;
	int i;
	while (cin >> i) {
		vi.push_back(i);
	}



}