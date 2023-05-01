#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 *
 * @a: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *a)
{
	size_t node_count = 1;

	/* return 0 as no of nodes when h is null*/
	if (a == NULL)
		return (0);

	while (a->next != NULL)
	{
		printf("%d\n", a->n);

		/*go to the next node*/
		a = a->next;
		/*count no of nodes*/
		node_count++;
	}

	/*print last node*/
	printf("%d\n", a->n);

	return (node_count);
}
