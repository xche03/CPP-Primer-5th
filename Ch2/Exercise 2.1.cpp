/*Exercise 2.1: What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double?*/
/*The language guarantees that an int will be at least as large as short, a long at
least as large as an int, and long long at least as large as long.The type long
long was introduced by the new standard.*/

/*Except for bool and the extended character types, the integral types may be signed
or unsigned. A signed type represents negative or positive numbers (including zero);
an unsigned type represents only values greater than or equal to zero.
The types int, short, long, and long long are all signed. We obtain the
corresponding unsigned type by adding unsigned to the type, such as unsigned
long. The type unsigned int may be abbreviated as unsigned.*/

/*The floating-point types represent single-, double-, and extended-precision values.
The standard specifies a minimum number of significant digits. Most compilers provide
more precision than the specified minimum. Typically, floats are represented in one
word (32 bits), doubles in two words (64 bits), and long doubles in either three
or four words (96 or 128 bits). The float and double types typically yield about 7
and 16 significant digits, respectively. The type long double is often used as a way
to accommodate special-purpose floating-point hardware; its precision is more likely to
vary from one implementation to another.*/