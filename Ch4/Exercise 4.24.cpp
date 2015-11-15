/*
Exercise 4.24: Our program that distinguished between high pass, pass,
and fail depended on the fact that the conditional operator is right
associative. Describe how that operator would be evaluated if the operator
were left associative.
*/

/*
finalgrade = (grade > 90) ? "high pass"	: (grade < 60) ? "fail" : "pass";
*/

// Then (grade > 90) ? "high pass"	: (grade < 60) will become the first operand, 
// which is an error because the ? branch and : branch are different data types (string vs. bool).
