/*Exercise 3.26: In the binary search program on page 112, why did we write
mid = beg + (end - beg) / 2; instead of mid = (beg + end)
/2;?*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	vector<int> v(10, 0);
	auto beg = v.begin();
	auto end = v.end();
	auto mid = (beg + end) / 2;//because iterator plus iterator is not supported.


	system("PAUSE");
	return 0;


}