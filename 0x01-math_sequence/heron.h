#ifndef HERON_H
#define HERON_H

/**
 * struct s_cell - singly linked list
 * @elt: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
