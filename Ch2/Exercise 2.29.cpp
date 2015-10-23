/*Exercise 2.28: Explain the following definitions. Identify any that are illegal.
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;*/

/*Exercise 2.29: Uing the variables in the previous exercise, which of the
following assignments are legal? Explain why.
(a) i = ic;
(b) p1 = p3;
(c) p1 = &ic;
(d) p3 = &ic;
(e) p2 = p1;
(f) ic = *p3;*/



int main() {

	int i, *const cp; //error: a const pointer must be initialized immediately
	int *p1, *const p2;//error: a const pointer must be initialized immediately
	const int ic, &r = ic; //error:ic is a constant and must be initialized immdiately after definition
	const int *const p3;//error: a const pointer must be initialized immediately
	const int *p;//ok: a pointer to a const type.


	i = ic;//error:top-level const of ic can be ignored
	p1 = p3;//error:low-level const can't be ignored. p1 is pointer to non-constant type
	p1 = &ic;//error:p1 is a pointer to a non-const type
	
	p3 = &ic;//error: it would be ok if this happens during the difinition of p3
	p2 = p1;//error:p2 is a constant pointer whose value can't be changed.
	ic = *p3;//error: ic is a constant variable whose value can't be changed.



	return 0;
}