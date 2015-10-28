/*Exercise 3.28: What are the values in the following arrays?
string sa[10];
int ia[10];
int main() {
string sa2[10];
int ia2[10];
}*/
#include <string>
using namespace std;
string sa[10];//10 empty strings.
int ia[10];//10 0s.
int main() {
	string sa2[10];//10 empty strings.
	int ia2[10];//As with variables of built-in type, a default-initialized array of built-in type that is defined inside a function will have undefined values.
	system("PAUSE");
	return 0;
}