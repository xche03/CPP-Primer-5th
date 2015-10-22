/*Exercise 2.28: Explain the following definitions. Identify any that are illegal.
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;*/

int main() {

	int i, *const cp; //error: a const pointer must be initialized immediately
	int *p1, *const p2;//error: a const pointer must be initialized immediately
	const int ic, &r = ic; //error:ic is a constant and must be initialized immdiately after definition
	const int *const p3;//error: a const pointer must be initialized immediately
	const int *p;//ok: a pointer to a const type.


	return 0;
}