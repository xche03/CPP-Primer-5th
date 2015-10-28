/*Exercise 3.21: Redo the first exercise from ?3.3.3 (p. 105) using iterators.*/

/*Exercise 3.16: Write a program to print the size and contents of the
vectors from exercise 3.13. Check whether your answers to that exercise
were correct. If not, restudy ¡ì 3.3.1 (p. 97) until you understand why you
were wrong.*/
/*Exercise 3.13: How many elements are there in each of the following
vectors ? What are the values of the elements ?
(a)vector<int> v1;
(b)vector<int> v2(10);
(c)vector<int> v3(10, 42);
(d)vector<int> v4{ 10 };
(e)vector<int> v5{ 10, 42 };
(f)vector<string> v6{ 10 };
(g)vector<string> v7{ 10, "hi" };*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printVector(const vector<int> &v) {
	cout << "The size of the vector is " << v.size() << endl;
	auto it = v.cbegin();
	for (; it < v.cend(); ++it) cout << (*it) << " " << endl;
	cout << "***************" << endl;

}

void printVector(const vector<string> &v) {
	cout << "The size of the vector is " << v.size() << endl;
	auto it = v.cbegin();
	for (; it < v.cend(); ++it) cout << (*it) << " " << endl;
	cout << "***************" << endl;
}


int main() {
	vector<int> v1;//0 elements
	printVector(v1);
	vector<int> v2(10);//10 elements whose values are all 0
	printVector(v2);
	vector<int> v3(10, 42);//10 elements whose values are all 42
	printVector(v3);
	vector<int> v4{ 10 };//1 element whose value is 10
	printVector(v4);
	vector<int> v5{ 10, 42 };//2 elements whose values are 10 and 42 respectively
	printVector(v5);
	vector<string> v6{ 10 };//10 elelemts whose values are empty string.
	printVector(v6);
	vector<string> v7{ 10, "hi" }; //10 elements whose values are "hi"
	printVector(v7);
	system("PAUSE");
	return 0;
}