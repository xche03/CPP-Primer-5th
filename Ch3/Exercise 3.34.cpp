/*Exercise 3.34: Given that p1 and p2 point to elements in the same array,
what does the following code do ? Are there values of p1 or p2 that make
this code illegal ?
p1 += p2 - p1;*/
#include <iostream>
using namespace std;
int main() {
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *p1 = &a[1];
	int *p2 = &a[5];
	p1 += p2 - p1;//p1 and p2 point to the same element;

	cout << "*P1 = " << *p1 << endl;
	cout << "*P2 = " << *p2 << endl;

	system("PAUSE");
	return 0;

}