/*Exercise 2.38: Describe the differences in type deduction between
decltype and auto.Give an example of an expression where auto and
decltype will deduce the same type and an example where they will deduce
differing types.*/

int main() {

	int i = 0;
	/*auto and decltype deduce the same type*/
	auto a = i;
	decltype(i) b = i;

	/*auto ordinarily ignores top-level consts*/
	/*When the expression to which we apply decltype is a variable,
decltype returns the type of that variable, including top-level const and
references:*/

	const int j = 0;

	auto c = j;//c has the type of int
	decltype(j) d = 0; //d has the type of const int

	
	
	
	
	/*On the other hand, the dereference operator is an example of an expression for
which decltype returns a reference. As we’ve seen, when we dereference a pointer,
we get the object to which the pointer points. Moreover, we can assign to that object.
Thus, the type deduced by decltype(*p) is int&, not plain int.*/
	int k = 0;
	int l = 0;
	int *pk = &k;

	auto e = *pk;// e has the type of int
	decltype(*pk) f=l; //e has the type of int& and must be initialized.


	return 0;
}
