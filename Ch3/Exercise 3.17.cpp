/*Exercise 3.17: Read a sequence of words from cin and store the values a
vector.After you¡¯ve read all the words, process the vector and change
each word to uppercase.Print the transformed elements, eight words to a
line.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	

	vector<string> v;
	string s;
	//input
	while (cin >> s) v.push_back(s);
	//transfer
	if (!v.empty()) {
		for (decltype(v.size()) index = 0; index < v.size(); index++) {
			string &s1 = v[index];
			if(!s1.empty())
			for (auto &c : s1) {
				c = toupper(c);
			}
		}
	}
	//print
	int cnt = 0;
	if (!v.empty()) {
		for (decltype(v.size()) index = 0; index < v.size(); index++) {
			cout << v[index]<<" ";
			++cnt;
			if (cnt == 8) {
				cout << endl;
				cnt = 0;
			}



		}
	}
	system("PAUSE");
	return 0;


}