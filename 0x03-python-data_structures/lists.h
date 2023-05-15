#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_f
 * @n: integer
 * @next: points
 * Description: singly linked list node structure
 */
typedef struct listint_f
{
	int n;
	struct listint_f *next;
} listint_p;

size_t print_listint(const listint_p *h);
listint_p *add_nodeint_end(listint_p **head, const int n);
void free_listint(listint_p *head);
int is_palindrome(listint_p **head);

#endif
