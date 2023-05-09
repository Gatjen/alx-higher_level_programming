#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listints - singly linked list
 * @n: integer
 * @next: points
 *
 * Description: singly linked
 */
typedef struct listints
{
	int n;
	struct listints *next;
} listint_p;

size_t print_listint(const listint_t *h);
listint_p *add_nodeint_end(listint_p **head, const int n);
void free_listint(listint_p *head);
listint_p *insert_node(listint_p **head, int number);

#endif
