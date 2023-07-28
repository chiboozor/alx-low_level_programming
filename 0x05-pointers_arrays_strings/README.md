				README FOR POINTERS, ARRAYS, AND STRINGS.


0-reset_to_98.c - a function that takes a pointer to an int as parameter, and updates the value it points to to 98.

1-swap.c - a function to swap the values of integers using their pointers. An int variable is declared inside the function, that holds the value of the first variable \*a points to, then the second variable \*b points to is assigned the value \*a points to, after which i is then finally assigned the value \*a points to.

2-strlen.c - a function that returns the length of a string passed to it through a pointer variable.

3-puts.c - prints a string followed to stdout.

4-print_rev.c - prints a string in reverse followed by a new line. A while loop is used to get the length of the string, inside which is an if statement that checks if the string is empty at which it breaks out of the while loop, but increases string length and loop variable until it encounters a newline character.
The for loop iterates over the string length by setting the counter variable i to the length of the string; in the test/condition i has to be less than the string length - 1 since counting ends in 0.

5-rev_string.c - reverses a string. 

6-puts2.c - this function works same way as function number 4 with just one difference: in the for loop, the loop variable is incremented in steps of 2.

7-puts_half.c - prints the second half of a string.

8-print_array.c - prints n elements of an array of integers. Numbers must be separated by a comma followed by a space. The prototype of the function returns nothing but takes two arguments: a pointer to an integer array variable, and n which is the number of elements to be printed.
In the first block of the if statement, the pointer is used to print the element of the array by dereferencing it and adding the value of i to it, while the second printf statement is used to print the element of the array using array subscript notation.

9-strcpy.c - copies a string pointed to by src including the terminating null byte into another string pointed to by dest.
