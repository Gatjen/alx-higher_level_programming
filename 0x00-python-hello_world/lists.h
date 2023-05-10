#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listint_p - singly linked list
 * @n: integer
 * @next: points to the  node
 *
 * Description: singly linked
 */
typedef struct listint_f
{
	int n;
	struct listint_f *next;
} listint_p;

size_t print_listint(const listint_p *h);
listint_p *add_nodeint(listint_p **head, const int n);
void free_listint(listint_p *head);
int check_cycle(listint_p *list);

#endif

