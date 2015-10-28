/*Exercise 3.22: Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first paragraph
to all uppercase.After you¡¯ve updated text, print its contents.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> text;
	text.push_back(
		    "A Dream Within A Dream\n"
		"*******************************\n"
		"Take this kiss upon the brow!\n"
        "And, in parting from you now,\n"
        "Thus much let me avow--\n"
        "You are not wrong, who deem\n"
        "That my days have been a dream;\n"
	    "Yet if hope has flown away\n"
		"In a night, or in a day,\n"
		"In a vision, or in none,\n"
		"Is it therefore the less gone ?\n"
		"All that we see or seem\n"
		"Is but a dream within a dream.\n");

	text.push_back("");

	text.push_back(
		"I stand amid the roar\n"
        "Of a surf-tormented shore,\n"
        "And I hold within my hand\n"
        "Grains of the golden sand--\n"
        "How few!yet how they creep\n"
        "Through my fingers to the deep,\n"
        "While I weep--while I weep!\n"
        "O God!can I not grasp\n"
        "Them with a tighter clasp ?\n"
        "O God!can I not save\n"
        "One from the pitiless wave ?\n"
        "Is all that we see or seem\n"
        "But a dream within a dream ? \n");

	for (auto it = text.begin();
	it != text.end() && !it->empty(); ++it) {
		for (auto &c : *it) {
			c = toupper(c);
		}

		cout << *it << endl;
	}




		
	system("PAUSE");
	return 0;
}