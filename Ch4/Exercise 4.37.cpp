/*Exercise 4.37: Rewrite each of the following old-style casts to use a named
cast:
Click here to view code image
int i; double d; const string *ps; char *pc; void
*pv;
(a) pv = (void*)ps;
(b) i = int(*pc);
(c) pv = &d;
(d) pc = (char*) pv;*/
#include <iostream>
using namespace std;
int main() {
	string s = "Hello";
	char c = 'a';
	int i; double d; const string *ps=&s; char *pc=&c; void *pv;
	/*const_cast A cast that converts a low - level const object to the corresponding
		nonconst type or vice versa.*/
	
	pv = static_cast<void*>(const_cast<string*>(ps)); //This one is a little bit tricky. const_cast only changes the constness of an object. It won't change the type.
	//Therefore, the constness is cast away first, and then, the type is cast to void*
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);

	system("PAUSE");
	
}