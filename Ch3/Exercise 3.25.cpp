/*Exercise 3.25: Rewrite the grade clustering program from ¡ì 3.3.3 (p. 104)
using iterators instead of subscripts.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
	vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade) { // read the grades
		if (grade <= 100) // handle only valid grades
			++*(it+grade/10); // increment the counter for the current cluster
	}

	for (; it != scores.end(); ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	system("PAUSE");
	return 0;


}