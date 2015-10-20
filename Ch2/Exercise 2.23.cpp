/*Exercise 2.23: Given a pointer p, can you determine whether p points to a
valid object? If so, how? If not, why not?*/
/*The answer is no. Even if a point is not nullptr, it could be invalid.*/
#include <iostream>
using namespace std;
int main() {

	int *p = new int(1);
	delete p;
	if (p) { cout << "Pointer p is not valid, but doesn't have nullptr value." << endl; }
	
	system("PAUSE");
	return 0;

}

/*Advice: Initialize all Pointers
Uninitialized pointers are a common source of run-time errors.
As with any other uninitialized variable, what happens when we use an
uninitialized pointer is undefined. Using an uninitialized pointer almost always
results in a run-time crash. However, debugging the resulting crashes can be
surprisingly hard.
Under most compilers, when we use an uninitialized pointer, the bits in the
memory in which the pointer resides are used as an address. Using an
uninitialized pointer is a request to access a supposed object at that
supposed location. There is no way to distinguish a valid address from an
invalid one formed from the bits that happen to be in the memory in which
the pointer was allocated.
Our recommendation to initialize all variables is particularly important for
pointers. If possible, define a pointer only after the object to which it should
point has been defined. If there is no object to bind to a pointer, then
initialize the pointer to nullptr or zero. That way, the program can detect
that the pointer does not point to an object.*/