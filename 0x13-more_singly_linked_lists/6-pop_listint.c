#include "lists.h"

/**
 * pop_listint - function to deletes head of the node
 *
 * @head: pointer to the main node in the list
 *
 * Return: the head's node's data (n)
 */
int pop_listint(listint_t **head)
{
	int main_node;
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*get addr of next node*/
	next = temp->next;
	/*get element of first node*/
	main_node = temp->n;

	/*free first node*/
	free(temp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (main_node);
}
