				README FOR EVEN MORE POINTERS, ARRAYS, AND STRINGS.

0-memset.c - fills memory with a constant byte. This function works like the builtin memset() function is c, which is used to fill a memory area by something else. For instance, the \_memset() function takes 3 arguments: a pointer to a buffer(memory area; char \*s), character to fill _buffer_ with (char b), and an unsigned int n (variable to show how many times the buffer is to be filled with the character).

1-memcpy.c - copies a memory area. It works like the memset() function except the value at src[i] is stored temporarily in another variable, then that value is assigned to dest[i]. The function takes 3 args: a pointer to the copy source, a pointer to the copy destination, and n bytes of the copy source to be copied.

2-strchr.c - locates a character in a string and returns a pointer to the first occurrence of the character. The second loop compares the character at s[i] to the character passed as an argument to the function, and returns its first occurrence in the string if they both match and returns a pointer to the character by adding the index at which it was found to the pointer to the string. That is, if the character was found at the 6th index of the string, then the function returns s + 6 i.e the point at which the character was found and then prints the rest of the rest of the string with it.

3-strspn.c - this function returns the length of the prefix of a string. It has two loops: the first loop runs through the string "s", while the inner loop runs through the string "accept". The "accept" string contains letters/characters that "s" is checked against. That is, if a character in "s" is found in "accept" the 'len' variable is incremented by 1, if it isn't the function simply returns the number stored in the 'len' variable.

4-strpbrk.c - works just like the "\_strspn" function. Major differences are: it returns a pointer to the first occurrence of the character in 's' that is in 'accept'; and returns NULL if the string to be searched is empty unlike the "\_strspn" that returns NULL if the string to be matched against i.e 'accept' is empty.
