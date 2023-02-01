#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	 listint_t *node, *prev;

	 if (!head)
		 return (0);

	 if (idx == 0)
	 {
		 node = add_nodeint(head, n);
		 return (node);
	 }

	 node = malloc(sizeof(listint_t));
	 if (!node)
		 return (0);
	 node->n = n;

	 prev = get_nodeint_at_index(*head, idx - 1);
	 if (!prev)
	 {
		 free(node);
		 return (0);
	 }

	 node->next = prev->next;
	 prev->next = node;
	 return (node);
}

/**
 * get_nodeint_at_index - get node at index
 * @head: head node
 * @index: index node
 * Return: address of index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	if (!node)
		return (0);

	while (node)
	{
		if (index == i)
			return (node);
		i++;
		node = node->next;
	}
	return (0);
}

/**
 * add_nodeint - add not at start
 * Return: pointer to node
 * @head: head node
 * @n: new node data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}


