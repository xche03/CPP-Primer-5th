/*Exercise 3.31: Write a program to define an array of ten ints. Give each
element the same value as its position in the array.*/

#include <cstdlib>
int main() {
	constexpr size_t array_size = 10;
	int a[10] = {};
	for (size_t ix = 0; ix < array_size; ++ix) a[ix] = ix;

	system("PAUSE");
	return 0;
}