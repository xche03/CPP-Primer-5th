/*Exercise 4.14: Explain what happens in each of the if tests:
if (42 = i) // ...
if (i = 42) // ...*/


// if (42 = i) : Error, 42 can't be an lvalue.
// if (i = 42) : OK, the condition will be valued to true.