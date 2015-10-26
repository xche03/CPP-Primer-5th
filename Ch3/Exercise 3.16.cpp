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
int main() {
	vector<int> v1;//0 elements
	cout << "The size of v1 is " << v1.size() << endl;
	vector<int> v2(10);//10 elements whose values are all 0
	cout << "The size of v2 is " << v2.size() << endl;
	vector<int> v3(10, 42);//10 elements whose values are all 42
	cout << "The size of v3 is " << v3.size() << endl;
	vector<int> v4{ 10 };//1 element whose value is 10
	cout << "The size of v4 is " << v4.size() << endl;
	vector<int> v5{ 10, 42 };//2 elements whose values are 10 and 42 respectively
	cout << "The size of v5 is " << v5.size() << endl;
	vector<string> v6{ 10 };//10 elelemts whose values are empty string.
	cout << "The size of v6 is " << v6.size() << endl;
	vector<string> v7{ 10, "hi" }; //10 elements whose values are "hi"
	cout << "The size of v7 is " << v7.size() << endl;
	system("PAUSE");
	return 0;


}