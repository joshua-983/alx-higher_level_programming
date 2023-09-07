#include "lists.h"

/**
 * check_cycle - check for linked list containing a cycle
 * @list: check linked list
 * Return: 1 0r 0
 */

int check_cycle(listint_t *list)

{
	listint_ *slow = list:
	listint_t *fast = list
	if (!list)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
