#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @hh: The operator passed as argument.
 * If hh doesnt match any of the expected operators
 * (+, -, *, /, %), return NULL
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */

int (*get_op_func(char *hh))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int g = 0;

	while (ops[g].op != NULL && *(ops[g].op) != *hh)
		g++;

	return (ops[g].f);
}
