/*Exercise 2.32: Is the following code legal or not? If not, how might you
make it legal ?
Click here to view code image
int null = 0, *p = null;*/

int main() {
	constexpr int null = 0;
	int *p = null;//we can't assign an int to a pointer, but we can assign nullptr or a constant to it.

	return 0;
}