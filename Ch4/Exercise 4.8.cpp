/*Exercise 4.8: Explain when operands are evaluated in the logical AND, logical
OR, and equality operators.*/

/*The logical AND and OR operators always evaluate their left operand before the right. 
Moreover, the right operand is evaluated if and only if the left operand does not determine the result. 
This strategy is known as short-circuit evaluation.*/

//The right side of an && is evaluated if and only if the left side is true.
//The right side of an || is evaluated if and only if the left side is false.
//Equality operators : true only if both operands have the same value, otherwise, it returns false.