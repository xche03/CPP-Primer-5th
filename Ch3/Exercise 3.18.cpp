/*Exercise 3.18: Is the following program legal? If not, how might you fix it?
vector<int> ivec;
ivec[0] = 42;*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	//vector<int> ivec;
	//ivec[0] = 42;//error: ivec has no element, the index is out of bound.
	vector<int> ivec{0};
	ivec[0] = 42;
	system("PAUSE");
	return 0;


}