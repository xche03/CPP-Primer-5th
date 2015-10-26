/*Exercise 3.19: List three ways to define a vector and give it ten elements,
each with the value 42. Indicate whether there is a preferred way to do so
and why.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	vector<int> v1 (10, 42);
	vector<int> v2{ 42, 42,42,42,42,42, 42,42,42,42 };
	vector <int>v3;

	for (int i = 0; i < 10; i++)v3.push_back(42);

	system("PAUSE");
	return 0;


}