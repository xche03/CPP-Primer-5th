/*Exercise 3.43: Write three different versions of a program to print the
elements of ia. One version should use a range for to manage the
iteration, the other two should use an ordinary for loop in one case using
subscripts and in the other using pointers. In all three programs write all the
types directly. That is, do not use a type alias, auto, or decltype to
simplify the code.*/
/*To use a multidimensional array in a range for, the loop control variable for
all but the innermost array must be references.*/


#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	int ia[3][4] = { // three elements; each element is an array of size 4
		{ 0, 1, 2, 3 }, // initializers for the row indexed by 0
		{ 4, 5, 6, 7 }, // initializers for the row indexed by 1
		{ 8, 9, 10, 11 } // initializers for the row indexed by 2
	};

	//range for

	
	for (int (&row)[4] : ia) {// for every element in the outer array
		for (int &col : row) { // for every element in the inner array
			cout << col << " ";
		}
		cout << endl;
	}

	cout << "***************************" << endl;
	//Ordinary

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j< 4; ++j) {
			cout << ia[i][j]<<" ";
		}
		cout << endl;
	}

	cout << "***************************" << endl;

	//pointers
	for (int(*p)[4] = ia; p < ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q) {
			cout << *q << " ";
		}

		cout << endl;
	}

	system("PAUSE");
	return 0;

}