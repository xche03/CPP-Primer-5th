/*
Exercise 4.32: Explain the following loop.
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;
ix != size && ptr != ia+size;
++ix, ++ptr) {  ...  }
*/

#include <iostream>
using namespace std;

int main() {

	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	for (int *ptr = ia, ix = 0;
	ix != size && ptr != ia + size;
		++ix, ++ptr) {
		cout << ix << " "; //ix is the index
		cout << ia[ix]<<" ";//use ix to access the element in the array
		cout << *ptr << " ";// use pointer to access the element in the array
		cout << endl;
	}
	

	system("PAUSE");
	return 0;
}