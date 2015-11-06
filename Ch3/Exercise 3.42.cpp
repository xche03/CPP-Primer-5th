/*Exercise 3.42: Write a program to copy a vector of ints into an array of
ints.*/

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
	int a[10] = {};
	vector<int>::iterator it = ivec.begin();
	int i = 0;
	while (it != ivec.end()) {
		a[i] = *it;
		++it;
		++i;
	}


	system("PAUSE");
	return 0;

}