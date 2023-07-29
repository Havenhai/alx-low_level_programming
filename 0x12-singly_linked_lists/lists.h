#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @string: string - (malloc'ed string)
 * @length: length of the string
 * @next_node: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *strings;
	unsigned int length;
	struct list_s *next_node;
} list_t;

size_t print_list(const list_t *have);
size_t list_len(const list_t *have);
list_t *add_node(list_t **head, const char *strings);
list_t *add_node_end(list_t **head, const char *strings);
void free_list(list_t *head);

#endif
