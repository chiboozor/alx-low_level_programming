				README FOR MORE MALLOC, FREE PROJECTS

0-malloc_checked.c - a function that allocates memory using malloc. It returns a pointer to the allocated memory, and causes a normal process termination with a status value of 98.

1-string_nconcat.c - concatenates n elements of source string (s2) to destination string (s1).
First, the lengths of both strings is evaluated, then memory is allocated for the new string (str_ptr) by adding the length of the s1 string (len), the number of elements of the s2 string to be concatenated (n), and 1 for the terminating null character and multiplying them by the size of the new string using the sizeof() method.
Then a for loop first concatenates the elements of s1 to str_ptr.
The second loop however, begins concatenating n elements of s2 to the end of str_ptr by adding the jth index of the loop to the length of the s1 string.
Lastly, the terminating null character is added to the end of the new string (str_ptr) by adding the length of s1 to the number of elements (n) of s2 concatenated (sum of these two variables gives the length of the new string created in memory).

2-calloc.c - allocates space in memory using the calloc function. \*((char \*)(str_ptr) + i) = 0 first casts the value of the memory allocation to type char, then dereferences the value at that address + ith index and then sets it to 0.

3-array_range - creates an array of integers in memory dynamically using malloc.
It returns NULL; if min > max and if memory allocation fails. The amount of space to be kept for allocation is calculated by subtracting the min value from the max value and then adding 1. The for loop runs through the range (which is max - min) because that is how much space that is required to create the array, then the elements of the array is filled by adding the current position of the loop to the min value.
