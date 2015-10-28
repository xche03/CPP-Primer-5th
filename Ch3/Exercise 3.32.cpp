/*Exercise 3.32: Copy the array you defined in the previous exercise into
another array. Rewrite your program to use vectors.*/

#include <cstdlib>
int main() {
	constexpr size_t array_size = 10;
	int a[array_size] = {};
	for (size_t ix = 0; ix < array_size; ++ix) a[ix] = ix;

	
	int a1[array_size] = {};
	for (size_t ix = 0; ix < array_size; ++ix) a1[ix] =a[ix];

	system("PAUSE");
	return 0;
}