/*Exercise 2.18: Write code to change the value of a pointer. Write code to
change the value to which the pointer points.*/

int main() {
	int *p1, *p2, i1 = 0, i2 = 0;
	p1 = &i1;
	p2 = &i2;
	p1 = p2;
	*p2 = 100;
}