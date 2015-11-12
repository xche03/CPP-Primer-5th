/*Exercise 4.16: Although the following are legal, they probably do not
behave as the programmer expects. Why? Rewrite the expressions as you
think they should be.
(a) if (p = getPtr() != 0)
(b) if (i = 1024)*/

// if (p = getPtr() != 0) ==> if ((p = getPtr()) != 0)   (The assignment operator has low precedence, so parentheses are needed.)
//if (i = 1024) ==> if (i==1024)
