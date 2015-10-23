/*Exercise 2.36: In the following code, determine the type of each variable
and the value each variable has when the code finishes :
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;*/

int main() {
	int a = 3, b = 4;
	decltype(a) c = a;//c is int, c is assigned the value of 3
	decltype((b)) d = a;//d is a int reference bound to a
	++c;//after this operaiton, c has the value of 4;
	++d;//after the operaiton, a has the value of 4.

	return 0;
}

/*The way decltype handles top-level const and references differs subtly from the
way auto does. When the expression to which we apply decltype is a variable,
decltype returns the type of that variable, including top-level const and
references:*/

/*Remember that decltype((variable)) (note, double parentheses) is always
a reference type, but decltype(variable) is a reference type only if variable
is a reference.*/

