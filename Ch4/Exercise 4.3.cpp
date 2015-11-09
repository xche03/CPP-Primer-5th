/*Exercise 4.3: Order of evaluation for most of the binary operators is left
undefined to give the compiler opportunities for optimization. This strategy
presents a trade-off between efficient code generation and potential pitfalls in
the use of the language by the programmer. Do you consider that an
acceptable trade-off? Why or why not?*/

/*Advice: Managing Compound Expressions
When you write compound expressions, two rules of thumb can be helpful:
1. When in doubt, parenthesize expressions to force the grouping that the
logic of your program requires.
2. If you change the value of an operand, don’t use that operand elsewhere
in the same expresion.
An important exception to the second rule occurs when the subexpression
that changes the operand is itself the operand of another subexpression. For
example, in *++iter, the increment changes the value of iter. The (now
changed) value of iter is the operand to the dereference operator. In this
(and similar) expressions, order of evaluation isn’t an issue. The increment
(i.e., the subexpression that changes the operand) must be evaluated before
the dereference can be evaluated. Such usage poses no problems and is
quite common.*/