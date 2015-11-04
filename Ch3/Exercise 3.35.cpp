/*Exercise 3.35: Using pointers, write a program to set the elements in an
array to zero.*/
#include <iostream>
#include <iterator> //begin() and end() are defined in this header
using namespace std;
int main() {
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	
	int *pbeg = begin(a), *pend = end(a);
	// find the first negative element, stopping if we've seen all the elements
	while (pbeg != pend && *pbeg >= 0)
	{
		*pbeg = 0;
		++pbeg;
	}

	system("PAUSE");
	return 0;

}