				README FOR MALLOC, FREE TASKS.

0-create_array.c - a function that creates an array of chars dynamically, and initialized it with a specific char.

A pointer to the array is first declared, alongside a counter variable of same data type as the 'size' of the array to be created. Next, the function checks if the size of the array to be created in memory is 0 at which point the function exits and returns NULL, otherwise it goes on to dynamically allocate a memory in space the size of the character multiplied by the 'size' of the array passed to the function. 
Then, the counter variable is initialized and a while loop runs through the size of the array and assigns the character stored in 'c' to each increment in index of the array.


1-strdup.c - this function is similar to the strcpy() function in that it is also used to copy strings in C. It firsts checks if the source string is NULL, then it returns NULL and exits the program. But if it isn't, it goes on to get the length of the source string (since copying from source to destination would be performed).
Then it loops through the length of the string and assigns (copies) the ith character of the source string to the ith index of the destination string. 
While loops were used in the iteration because we may not have an idea of the length of the string to be passed as a parameter to the function.


2-str_concat.c - a function that concatenates two strings and returns a pointer to a new string dynamically allocated in memory.

The malloc function creates the array in memory by summing up both lengths, multiplying it by size of char and then adding 1 byte for the terminating null byte. It returns NULL if the memory allocated is NULL.
The first for loop copies the contents of 's1' into 'str' by looping over the length of s1;
The second for loop copies the contents of 's2' into 'str' by looping over the length of s2. It begins copying the contents of s2 into str by incrmenting by 1 the length of the source string (i.e the end of s1).
At the end, it adds the terminating null byte to the end of 'str' by incrementing the length of s1 by the last jth index

3-alloc_grid.c - a function that dynamically allocates memory for a 2D array.

First, a pointer to an array of pointers (since a 2D array is an array of 1D arrays) is declared. This pointer to an array of pointers holds the address of the outer array. Memory space is allocated for the outer array (the 2D array itself) by multiplying the height (columns) of the 2D array to be created by the size of the inner arrays to be created, i.e the number of arrays (height) to be created in the 2D array.
If allocation for each index of the inner array fails, a loop run to free the memory already allocated for each index of the inner arrays in descending order beginning from the last index of the last inner array, and then frees the memory allocated for the outer array (2D array) and returns NULL.

4-free_grid.c - function that frees memory allocated for a 2D array. It first frees the memory for each index of the inner array then frees the memory allocated for the outer array.
