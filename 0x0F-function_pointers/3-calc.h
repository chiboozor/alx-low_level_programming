#ifndef SIMPLE_OPERATIONS
#define SIMPLE_OPERATIONS

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/* Function Prototypes */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator symbol
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


#endif /* SIMPLE_OPERATIONS */
