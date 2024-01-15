#include "lists.h"

/**
 * check_cycle - linked list with a circle checker
 * @list: linked list to check
 * Return: 0 when list doesn't have cycle, 1 if it does
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;

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
