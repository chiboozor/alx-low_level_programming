				README FOR MORE FUNCTIONS, MORE NESTED LOOPS TASKS.

0-isupper.c - a function that checks for uppercase letter c. It returns 1 if c is uppercase, and 0 otherwise.

1-isdigit.c - checks for a digit c (0-9). Returns 1 if c is a digit, 0 otherwise.

2-mul.c - function to multiply two integers a and b.

3-print_numbers.c - this function prints the numbers from 0 - 9 using a user-defined function (\_putchar; a function used to print characters one at a time to the stdout). Since \_putchar is a fxn to print only characters, to print numbers the ASCII character '0' is added to get their ASCII value i.e '0' = 48, so 0 + 48 is 0 in ASCII.

4-print_most_numbers.c - same function as task 3 above but with the exception of 2 and 4. A conditional check was added to the function to check if the digit is not 2 and neither is it 4.`

5-more_numbers.c - prints the numbers 0-14 ten times followed by a new line using the \_putchar function. Two loops is used: Outer loop for printing the numbers ten times, and the inner loop for printing the numbers themselves on a line.

6-print_line.c - draws a straight line on the terminal based on the number passed to the print_line function

7-print_diagonal.c - prints a diagonal n times using '\'. The outer loop iterates n time, while the inner loop iterates j times printing spaces equal to the current iteration i.e j prints two spaces for i = 2 before printing the backslash, prints 4 spaces for i = 5 before printing the backslah and so on.

8-print_square.c - prints a square of size 'size'. The outer loop iterates to create the square's height, while the inner loop iterates to create the square's width. There's a check print a new line if size <= 0.

9-fizz_buzz.c - the FizzBuzz program prints words in place of some number between 1 and 100. It rints 'Fizz' for numbers that are multiples of 3, 'Buzz' for numbers that are multiples of 5, and 'FizzBuzz' for multiples of both 3 and 5.
There are two if statements: the first checks if i passes the criteria of either being a multiple of 3, 5 or both; the second checks if i != 100 for which it prints a space immediately after printing i, and does nothing if i == 100.
