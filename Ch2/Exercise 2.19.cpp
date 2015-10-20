/*Exercise 2.19: Explain the key differences between pointers and references.*/
/*A pointer is a compound type that ¡°points to¡± another type. Like references, pointers
are used for indirect access to other objects. Unlike a reference, a pointer is an object
in its own right. Pointers can be assigned and copied; a single pointer can point to
several different objects over its lifetime. Unlike a reference, a pointer need not be
initialized at the time it is defined. Like other built-in types, pointers defined at block
scope have undefined value if they are not initialized.*/