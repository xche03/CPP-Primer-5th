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
	vector<int> v2(10);//10 elements whose values are all 0
	vector<int> v3(10, 42);//10 elements whose values are all 42
	vector<int> v4{ 10 };//1 element whose value is 10
	vector<int> v5{ 10, 42 };//2 elements whose values are 10 and 42 respectively
	vector<string> v6{ 10 };//10 elelemts whose values are empty string.
	vector<string> v7{ 10, "hi" }; //10 elements whose values are "hi"
	

}