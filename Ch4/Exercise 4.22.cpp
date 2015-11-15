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
	double grade = 59;


	finalgrade = (grade > 90) ? "high pass"
		: (grade < 60) ? "fail" : (grade >= 60 && grade <= 75) ? "low pass" : "pass";


	cout <<"First version finalgrade = " <<finalgrade << endl;


	if (grade > 90) {
	
		finalgrade = "high pass";
	
	}
	else if (grade > 75 && grade <= 90) {

		finalgrade = "pass";
	}

	else if (grade >= 60 && grade <= 75) {

		finalgrade = " low pass";
	}

	else {
	
		finalgrade = "fail";
	}


	cout << "Second version finalgrade = " << finalgrade << endl;
	system("PAUSE");
	return 0;
}