#include <stdlib.h>
#include "heron.h"

/**
 * heron - prints the last digit of a number
 * @p: The number to print
 * @x0: x0
 *
 * Return: On success 1.
 */

t_cell *heron(double p, double x0)
{
	t_cell *heron_node, *new_node;
	double xn = (x0 + (p / x0)) / 2;

	heron_node = malloc(sizeof(t_cell));
	new_node = malloc(sizeof(t_cell));

	if (x0 == 1)
	{
		new_node->elt = x0;
		new_node->next = NULL;
	}
	while (x0 - xn >= 0.0000001 || x0 == 1)
	{
		heron_node = new_node;
		new_node = malloc(sizeof(t_cell));
		new_node->elt = xn;
		new_node->next = heron_node;
		x0 = xn;
		xn = (x0 + (p / x0)) / 2;
	}
	heron_node = new_node;

	return (heron_node);
}
