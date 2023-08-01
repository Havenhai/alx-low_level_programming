#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked listes
 * @ntimes: Integer
 * @next_node: Points to the next node
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
	int ntimes;
	struct listint_s *next_node;
} listint_t;

int sum_listint(listint_t *head);
size_t print_listint(const listint_t *have);
size_t listint_len(const listint_t *have);
listint_t *add_nodeint(listint_t **head, const int ntimes);
listint_t *add_nodeint_end(listint_t **head, const int ntimes);
void free_listint(listint_t *head);
listint_t *find_listint_loop(listint_t *head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
void free_listint2(listint_t **head);
listint_t *insert_nodeint_at_ind(listint_t **head, unsigned int i, int ntimes);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **have);

#endif
