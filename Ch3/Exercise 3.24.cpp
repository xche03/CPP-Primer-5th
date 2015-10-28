/*Exercise 3.24: Redo the last exercise from ¡ì 3.3.3 (p. 105) using iterators.*/
/*Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-tolast,
and so on.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	vector<int> v;
	int i = 0;

	while (cin >> i) {
		v.push_back(i);
	}

	if (!v.empty() && v.size() >= 2) {
		auto it = v.cbegin() + 1;
		while (it!=v.cend()) {
			cout << *it + *(it - 1) << endl;
			++it;
		}

	}
	cout << "**************************" << endl;
	
	if (!v.empty()&& v.size()>=2) {
		auto mid = v.size() % 2 == 0 ? v.size() / 2 : v.size() / 2 + 1;
		for (decltype(v.size()) index = 0; index < mid; ++index) {//use size/2 to avoid doulbe counting
			cout << *(v.begin()+index) + *(v.end()-index-1)<<endl;
		}
	}
	system("PAUSE");
	return 0;


}