#include "lists.h"

/**
 * print_listint - Function that prints all elements of a list
 *
 * @i: pointer to first node
 *
 * Return: node count
 */
size_t print_listint(const listint_t *i)
{
	size_t node_count = 1;

	/* return 0 as no of nodes when i is null*/
	if (i == NULL)
		return (0);

	while (i->forward != NULL)
	{
		printf("%d\n", i->a);

		/*go to the next node*/
		i = i-forward;
		/*count no of nodes*/
		node_count++;
	}

	/*print last node*/
	printf("%d\n", i->a);

	return (node_count);
}
