/*
Exercise 4.31: The program in this section used the prefix increment and
decrement operators. Explain why we used prefix and not postfix. What
changes would have to be made to use the postfix versions? Rewrite the
program using postfix operators.
*/

/*In fact, no difference!!*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector <int> ivec(10);
	vector<int>::size_type cnt = ivec.size();
	// assign values from size... 1 to the elements in ivec
	for (vector<int>::size_type ix = 0;
	ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;


	vector <int> ivec1(10);
	vector<int>::size_type cnt1 = ivec1.size();
	// assign values from size... 1 to the elements in ivec
	for (vector<int>::size_type ix1 = 0;
	ix1 != ivec.size(); ix1++, cnt1--)
		ivec1[ix1] = cnt1;


	system("PAUSE");
	return 0;
}