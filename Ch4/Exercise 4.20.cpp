/*
Exercise 4.20: Assuming that iter is a vector<string>::iterator,
indicate which, if any, of the following expressions are legal. Explain the
behavior of the legal expressions and why those that aren¡¯t legal are in error.
(a) *iter++;
(b) (*iter)++;
(c) *iter.empty()
(d) iter->empty();
(e) ++*iter;
(f) iter++->empty();
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	vector<string> v = { "Hi, ", "how ", "are ", "you!" };

	auto iter = v.begin();

	*iter++;
	// (*iter)++; string doesn't support ++
	//*iter.empty(); dereference has lower precednece than . operator, 
	//and the iterator doesn't have a memeber of empty
	iter->empty();
	//++*iter;//iter will be dereferenced first, and string doesn't support ++ 
	iter++->empty();



	system("PAUSE");
	return 0;


}
