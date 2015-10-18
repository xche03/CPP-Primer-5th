/*Exercise 2.10: What are the initial values, if any, of each of the following
variables?
Click here to view code image
std::string global_str;
int global_int;
int main()
{
int local_int;
std::string local_str;
}*/
#include <string>
/*Each class controls how we initialize objects of that class type. In particular, it is up
to the class whether we can define objects of that type without an initializer. If we
can, the class determines what value the resulting object will have.*/
/*Most classes let us define objects without explicit initializers. Such classes supply an
appropriate default value for us. For example, as we¡¯ve just seen, the library string
class says that if we do not supply an initializer, then the resulting string is the
empty string:*/
std::string global_str;
/*When we define a variable without an initializer, the variable is default initialized.
Such variables are given the ¡°default¡± value. What that default value is depends on
the type of the variable and may also depend on where the variable is defined.
The value of an object of built-in type that is not explicitly initialized depends on
where it is defined. Variables defined outside any function body are initialized to zero.*/
int global_int;
int main()
{   
	/*Uninitialized objects of built-in type defined inside a function body have
undefined value. Objects of class type that we do not explicitly initialize have
a value that is defined by the class.*/
	int local_int;
	std::string local_str;
}