/*Exercise 4.18: What would happen if the while loop on page 148 that
prints the elements from a vector used the prefix increment operator?*/

/*auto pbeg = v.begin();
// print elements up to the first negative value
while (pbeg != v.end() && *beg >= 0)
cout << *pbeg++ << endl; // print the current value and advance pbeg*/


#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = { 0,1,2,3,4,5,-6,7,8,9 };

	auto pbeg = v.begin();

	while (pbeg != v.end() && *pbeg >= 0)
		//cout << *pbeg++ << endl;
		
		
		//Error1. Firt element won't get printed.
		//Error2. -6 gets printed.

		cout << *++pbeg << endl;


	system("PAUSE");
	return 0;


}



