/*Exercise 2.20: What does the following program do ?
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;*/

int main() {

	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1; //Value of i has been changed to 1764

	return 0;
}