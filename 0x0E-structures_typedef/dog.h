#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - basic information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes of functions used in this project */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/* Defining a new name for the type struct dog using typedef */
typedef struct dog dog_t;

#endif /* DOG_STRUCT */
