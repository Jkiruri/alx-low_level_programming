#include "lists.h"
/**
 * pop_listint - This deletes the head node of a linked list
 * @head: This is the pointer to the first element in the linked list
 * Return: This will return the data inside the elements that was deleted,
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
