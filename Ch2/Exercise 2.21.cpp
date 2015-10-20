/*Exercise 2.21: Explain each of the following definitions. Indicate whether
any are illegal and, if so, why.
int i = 0;
(a) double* dp = &i;
(b) int *ip = i;
(c) int *p = &i;*/

int main() {

	int i = 0;
	 double* dp = &i;//Error: assigning the address of an integer to a pointer to double
	 int *ip = i; //It is illegal to assign an int variable to a pointer, even if the variable¡¯s value happens to be 0.
	 int *p = &i; //OK


}

