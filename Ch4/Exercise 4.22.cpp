/*
Exercise 4.22: Extend the program that assigned high pass, pass, and fail
grades to also assign low pass for grades between 60 and 75 inclusive. Write
two versions: One version that uses only conditional operators; the other
should use one or more if statements. Which version do you think is easier
to understand and why?
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	string finalgrade;
	double grade = 91;


	finalgrade = (grade > 90) ? "high pass"
		: (grade < 60) ? "fail" : (grade >= 60 && grade <= 75) ? "low pass" : "pass";

	cout << finalgrade << endl;
	system("PAUSE");
	return 0;
}