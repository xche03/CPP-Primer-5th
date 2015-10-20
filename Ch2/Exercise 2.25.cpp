/*Exercise 2.25: Determine the types and values of each of the following
variables.
(a) int* ip, &r = ip;
(b) int i, *ip = 0;
(c) int* ip, ip2*/


int main() {

	int* ip, &r = ip;//ip is a pointer to int. &r=ip is  wrong definition while *&r=ip will be right.
	int i, *ip = 0;//i is integer and ip is a pointer that initialized to 0.
	int* ip, ip2; //ip is a pointer to an integer while ip2 is an integer.


}

/*A reference is not an object. Hence, we may not have a pointer to a reference.
However, because a pointer is an object, we can define a reference to a pointer*/

/*It can be easier to understand complicated pointer or reference declarations if
you read them from right to left.
For example: int *p; int *&r=p;

symbol closest to the name of the variable (in this case the & in &r) is the one that
has the most immediate effect on the variable¡¯s type. Thus, we know that r is a
reference. The rest of the declarator determines the type to which r refers. The next
symbol, * in this case, says that the type r refers to is a pointer type. Finally, the
base type of the declaration says that r is a reference to a pointer to an int


*/