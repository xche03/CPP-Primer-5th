/*Exercises Section 2.2.3
Exercise 2.12: Which, if any, of the following names are invalid ?
(a) int double = 3.14;
(b) int _;
(c) int catch - 22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;*/

int main() {

	 //int double = 3.14; //Error: double is keyword
	 int _; //OK:
	 //int catch-22;//Error: can't use "-".
	 //int 1_or_2 = 1; //Error: The language imposes no limit on name length. Identifiers must begin with either a letter or an underscore.
	 double Double = 3.14;//Ok:Identifiers are case-sensitive; upper- and lowercase letters are distinct: Double is not an keyword.


}