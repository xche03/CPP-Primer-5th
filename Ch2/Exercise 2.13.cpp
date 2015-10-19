/*Exercise 2.13: What is the value of j in the following program?
int i = 42;
int main()
{
int i = 100;
int j = i;
}*/

#include <iostream>
using namespace std;
int i = 42;
int main()
{
	int i = 100; //local i overrides and hides globla i.
	int j = i;
	cout << j << endl; //output:100
	system("PAUSE");
	return 0;
}