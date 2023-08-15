				README FOR STRUCTURES AND TYPEDEF TASKS

dog.h - a header file that defines a struct 'dog' with the following elements: name (char \*), age (float), and owner (char \*).

1-init_dog.h - initializes a variable of type 'struct dog', and maps the contents of the struct dog (name, age, owner) to the corresponding variables pointed to by 'd'.

2-print_dog.c - prints a struct dog. Prints (nil) if any element of 'd' is NULL, and simply returns if 'd' is NULL.

4-new_dog.c - creates a new dog using the alias formed (dog_t) with a copy of the dog's and the owner's name stored respectively. Since, copies of these two strings need to be stored, we need to find their lengths and then copy each character of the string into a new one. 
Hence, the 'length' function (which calculates the length of a string pointed to by 'str'), and the str_cpy function (which copies the characters of a source string into a destination string and returns a pointer to the destination string). 
In the new_dog function, two variables store the length of the 'name' and 'owner' elements respectively if neither 'name' or 'owner' is NULL, after which the str_cpy function is called to store the value at the name and owner elements into the dynamically memory allocated for the new_dog respectively. But if the new dog created (in this case, dog_new), the 'name' element, and the 'owner' element are NULL respectively, then the memory previously allocated is freed using the free function.
Given that 'age' element is not a pointer, it is assigned manually instead of using malloc.

5-free_dog.c - all the memory used in the previous function is freed. The 'name', 'owner' and the entire dog struct 'd' is freed, excepting 'age' which is actually freed when you call free(d).
