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

	if (!v.empty()) {
		for (decltype(v.size()) index = 0; index < v.size(); ++index) {
			if (index >= 1)cout << v[index] + v[index - 1]<<endl;

		}
	}

	cout << "**************************" << endl;
	if (!v.empty()&& v.size()>=2) {
		for (decltype(v.size()) index = 0; index < v.size()/2; ++index) {//use size/2 to avoid doulbe counting
			cout << v[index] + v[v.size() - 1 - index]<<endl;
		}
	}





	system("PAUSE");
	return 0;


}