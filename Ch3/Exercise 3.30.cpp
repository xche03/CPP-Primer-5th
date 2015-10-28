/*Exercise 3.30: Identify the indexing errors in the following code:
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
ia[ix] = ix;*/

int main() {

	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix)//subscript is out of bound when ix is equal to 10.
		ia[ix] = ix;



}