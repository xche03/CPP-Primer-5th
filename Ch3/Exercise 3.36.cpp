/*Exercise 3.36: Write a program to compare two arrays for equality. Write a
similar program to compare two vectors.*/
#include <iostream>
#include <iterator> //begin() and end() are defined in this header
using namespace std;
int main() {
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[] = { 0,1,2,3,4,5,6,7,7,9 };
	int *pabeg = begin(a), *paend = end(a);
	int *pbbeg = begin(b), *pbend = end(b);

	auto sizeA = paend - pabeg;
	auto sizeB = pbend - pbbeg;

	bool isEqual_Array = true;
	if (sizeA != sizeB) 
	{ isEqual_Array = false; }
	else
	{
		while (pabeg != paend && pbbeg != pbend)
		{
			if (*pabeg != *pbend) { isEqual_Array = false;}
			else {
				++pabeg;
				++pbbeg;
			}

			if (isEqual_Array == false) break;
			
		}


	}

	if (isEqual_Array) { cout << "The two arrays are equal.\n"; }
	else { cout << "The two arrays are not equal.\n"; }




	
	system("PAUSE");
	return 0;

}