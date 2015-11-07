/*Exercise 3.45: Rewrite the programs again, this time using auto.*/

/*Exercise 3.44: Rewrite the programs from the previous exercises using a
C++ Primer, Fifth Edition
type alias for the type of the loop control variables.*/

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

	
	//using int_array = int[4];
	//typedef int int_array[4];
	//range for
	for (auto &row : ia) {// for every element in the outer array
		for (int &col : row) { // for every element in the inner array
			cout << col << " ";
		}
		cout << endl;
	}

	cout << "***************************" << endl;
	//Ordinary

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j< 4; ++j) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}

	cout << "***************************" << endl;

	//pointers
	for (auto *p = ia; p < ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q) {
			cout << *q << " ";
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;


}