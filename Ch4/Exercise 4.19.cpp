/*Exercise 4.19: Given that ptr points to an int, that vec is a
vector<int>, and that ival is an int, explain the behavior of each of
these expressions. Which, if any, are likely to be incorrect? Why? How might
each be corrected?
(a) ptr != 0 && *ptr++
(b) ival++ && ival
(c) vec[ival++] <= vec[ival]*/

/*

ptr != 0 && *ptr++  // check ptr is not a nullptr, and then check the pointer value.
ival++ && ival // check ival, and then check ival+1 whether equal zero.
vec[ival++] <= vec[ival] // incorrect. It is an **undefined behavior.**
// correct:
vec[ival] <= vec[ival+1]

*/
