/*Exercise 2.5: Determine the type of each of the following literals.Explain
the differences among the literals in each of the four examples :
(a) 'a', L'a', "a", L"a"
(b)10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2*/

/*(a)*/
//'a': character literal
//L'a': wide character wchar_t
//"a" : string literal. 
/*The type of a string literal is array of constant chars.The compiler appends a null character(¡¯\0¡¯) to every string literal.Thus, the
actual size of a string literal is one more than its apparent size.*/
//L"a": wide character (wchar_t) string literal.

/*(b)*/
//10: integer
//10u unsigned integer
//10L long
//10uL unsigned long
//012 octal integer
//0xC hexadecimal integer

/*(c)*/
//3.14: floating-point double
//3.14: float
//3.14L: long double
/*(d)*/
//10: integer
// 10u: unsigned integer
//10.: double
//10e-2: double

