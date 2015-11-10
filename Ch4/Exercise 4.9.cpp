/*Exercise 4.9: Explain the behavior of the condition in the following if:
const char *cp = "Hello World";
if (cp && *cp)*/

//The left operand tests whether cp is nullptr or not.
//The right operand tests whether the first character that cp points to is zero or not.