/*Exercise 2.15: Which of the following definitions, if any, are invalid ? Why ?
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;*/

int main() {

	int ival = 1.01;
	int &rval1 = 1.01;//error: initializer must be an object
	int &rval2 = ival;
	int &rval3;  /* error: When we define a reference, instead of copying the initializer’s
value, we bind the reference to its initializer.Once initialized, a reference remains
bound to its initial object.There is no way to rebind a reference to refer to a different
object.Because there is no way to rebind a reference, references must be initialized.*/



}
