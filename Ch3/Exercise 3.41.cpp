/*Exercise 3.41: Write a program to initialize a vector from an array of
ints.*/

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };

	vector<int> ivec(begin(a), end(a));


	system("PAUSE");
	return 0;

}