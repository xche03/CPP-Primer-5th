/*Exercise 4.38: Explain the following expression:
Click here to view code image
double slope = static_cast<double>(j/i);*/

#include <iostream>
using namespace std;
int main() {
	int i = 6;
	int j = 5;
	double slope = static_cast<double>(j / i);
	cout << slope << endl;
	system("PAUSE");

}