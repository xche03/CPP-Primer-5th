/*Exercise 2.39: Compile the following program to see what happens when
you forget the semicolon after a class definition.Remember the message for
future reference.
Click here to view code image
struct Foo {  } // Note: no semicolon
int main()
{
	return 0;
}*/

struct Foo { /* empty */ } // Note: no semicolon
int main()
{
	return 0;
}