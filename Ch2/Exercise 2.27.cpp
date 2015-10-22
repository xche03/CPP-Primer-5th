/*Exercise 2.27: Which of the following initializations are legal? Explain why.
(a) int i = -1, &r = 0;
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2;
(e) const int *p1 = &i2;
(f) const int &const r2;
(g) const int i2 = i, &r = i;*/

int main() {
	int i = -1, &r = 0;//error: r is a non-const reference
	int i2 = 0;
	int *const p2 = &i2;//ok: p2 itself is a const pointer, it can point to a non-const variable
	const int i = -1, &r = 0;//ok: we can assign a literal to a const reference;
	const int *const p3 = &i2; //ok: we can assign the address of a non-const variable to a constant pointer to a const type
	const int *p1 = &i2; //ok: a pointer to a const type can be assigned an address of a non-constant variable
	const int &const r2; //error: a reference must be initialized in definition.
	const int i2 = i, &r = i;//ok: a const variable can be initialized by a non-const variable; a reference to a const type can be initialzied by a non-const variable.



	return 0;

}