/*Exercise 2.22: Assuming p is a pointer to int, explain the following code :
if (p) // ...
if (*p) // ...*/
#include <iostream>
using namespace std;
int main() {
	
	int *p = new int(1);
	delete p;
	if (p) { cout << "Pointer p is not valid, but doesn't have nullptr value."<<endl; }
	p = new int(100);
	if (*p) { cout << "Pointer p points to a non-zero integer" << endl; }
	delete p;
	system("PAUSE");
	return 0;

}