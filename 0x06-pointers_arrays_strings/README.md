			README FOR MORE POINTERS, ARRAYS AND STRINGS.

The readme contains additional info about each function, what it does, and how it does it.

0-strcat.c - this function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.

1-strncat.c - works just like the first function but concatenates n elements of the src string to the dest string. The function also checks, in the if statement, whether the source and destination strings are empty strings, at which it returns a pointer to the destination string. 

2-strncpy.c - this function copies n elements of a source string (pointed to by src) to a destination string (pointed to by dest). A if statement is placed at the beginning of the function to check if the source and the destination strings are both empty, at which the function simply returns the destination string.

3-strcmp.c - compares two strings. Returns a non-zero integer if they are different, and 0 if they are the same. 

4-rev_array.c - reverses the content of an array of integers by simply traversing only through half of the array, storing each element in a variable temporarily, and then swapping the element with the element at the end of the array each time the loop runs.

5-string_toupper.c - changes all lowercase letters of a string to uppercase. Another method of solving this problem would be to get the length of the string, loop through the length of the string and then convert lowercase characters to uppercase characters. But this will be inefficient and greatly increase the time complexity of the program because two separate tasks -- that can be combined into one (as seen and used in the while loop) -- is being done.
And  a While loop, instead of a for loop was used because we have no idea how long the string might be.

6-cap_string.c - Capitalizes Every Word Of A String.

7-leet.c - character encoding. Swaps 'a' and 'A' for 4; 'e' and 'E' for 3; 'o' and 'O' for 0; 't' and 'T' for 7; 'l' and 'L' for 1.
The first for loop goes through the string. While doing so, it goes through the characters in array 'a' using another loop variable 'j' and checks if the character at the ith index of the string 's'(s[i]) matches any of the characters at the jth index of the array 'a' (a[j]). If they match, it assigns to the character at the ith index of the string 's' (s[i]) the value of the character at the jth index of the array 'b' (b[j]).

100-rot13.c - this function works same as the leet function: it encodes characters, but does so using the 'rot13' encoding system which rotates the alphabets by 13 places i.e. replacing the first letter with the 13th letter, 2nd letter with the 14th letter and so on. 
One major difference between the leet function and the rot13 function is the presence of the 'break' statement in the rot13 function that causes the inner loop to stop temporarily to avoid unnecessary iterations.

102-magic.c - I printed the addresses of all variables in the program then checked to see the difference in byte sizes in all of them. Found that the pointer p was 5 bytes behind the value at the second index of the integer array a i.e. a[2], so I dereferenced the value of whatever was stored in the memory space five bytes after the pointer p (\*(p + 5)) to be able to change the value of a[2] to 98.
