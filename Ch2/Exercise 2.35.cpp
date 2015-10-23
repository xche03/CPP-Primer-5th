/*Exercise 2.35: Determine the types deduced in each of the following
definitions.Once you’ve figured out the types, write a program to see
whether you were correct.
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;*/

int main() {
	const int i = 42; 
	auto j = i; //j is an int. High-level const is dropped. 
	const auto &k = i; //k is const int &
	auto *p = &i; //p is const int *
	const auto j2 = i, &k2 = i;//j2 is cont int, and k2 is cont int.

	return 0;
}
