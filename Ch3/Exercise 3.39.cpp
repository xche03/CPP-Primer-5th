/*Exercise 3.39: Write a program to compare two strings. Now write a
program to compare the values of two C-style character strings.*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	
	string s1 = "Hello";
	string s2 = "Hello, guy!";

	if (s1 > s2) { cout << "String s1 is bigger than s2"<<endl; }
	else if (s1 == s2) { cout << "String s1 is equal to s2" << endl; }
	else   { cout << "String s1 is less then s2" << endl; }



	char cs1[]= "Hello";
	char cs2[] = "Hello, guy!";

	auto i = strcmp(cs1, cs2);

	if(i>0) { cout << "String cs1 is bigger than cs2" << endl; }
	else if (i == 0) {cout << "String cs1 is equal to cs2" << endl;}
	else { cout << "String cs1 is less then cs2" << endl; }





	system("PAUSE");
	return 0;
}

