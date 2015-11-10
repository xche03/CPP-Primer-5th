/*Exercise 4.7: What does overflow mean? Show three expressions that will
overflow.*/

/*Overflow happens when a value is computed that is outside the
range of values that the type can represent.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

	
	
	int i = numeric_limits<int>::max() + 1;
	cout << i << endl;

	long j = numeric_limits<long>::max() + 1;
	cout << j << endl;

	long long k = numeric_limits<long long>::max() + 1;
	cout << k << endl;


	system("PAUSE");
	return 0;
}