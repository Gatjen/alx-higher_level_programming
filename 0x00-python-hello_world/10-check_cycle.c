#include "lists.h"

/**
 * check_cycle - checks
 * @list: linked list
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_p *list)
{
	listint_p *slow = list;
	listint_p *fast = list;

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
