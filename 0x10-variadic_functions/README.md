				README FOR VARIADIC FUNCTIONS

0-sum_them_all.c - returns the sum of all its parameters.

1-print_numbers.c - prints numbers.

2-print_strings.c - prints strings.

3-print_all.c - prints anything.

In the first and the second case blocks, the va_arg() took an 'int' and a 'double' type respectively. This is because a variable of type 'char' and 'short int',  and a variable of type 'float' are promoted to 'int' and 'double' respectively.  This phenomenom is called *default argument promotion* rule. 

This rule ensures that a variadic function (like every other function) is able to retrieve its arguments from the stack correctly even if it doesn't know their exact types.
