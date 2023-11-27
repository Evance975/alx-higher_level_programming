#include "lists.h"

/**
 * check_cycle - function that checks if a linked list contains a cycle
 * @list: variable representing the linked list to be check
 *
 * Return: (1) list has cycle, (0) list has no cycle
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
