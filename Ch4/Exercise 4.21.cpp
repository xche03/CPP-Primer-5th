/*
Exercise 4.21: Write a program to use a conditional operator to find the
elements in a vector<int> that have odd value and double the value of
each such element.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	vector<int> v = {0, 1,2,3,4,5,6,7,8,9 };

	auto iter = v.begin();

	while (iter != v.end()) {
	     
		!((*iter) % 2 == 0) ? (*iter++) *= 2 : *iter++;
	}

	iter = v.begin();

	while (iter != v.end()) {

		cout << *iter++ << " ";
	}
	cout << endl;



	system("PAUSE");
	return 0;


}