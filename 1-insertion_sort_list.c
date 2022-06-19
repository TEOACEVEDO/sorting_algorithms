#include "sort.h"

/**
 * @brief 
 * 
 */

void insertion_sort_list(listint_t **list)
{
	listint_t **node_tmp = NULL;

	node_tmp = list;

	while(*list)
	{
		if((*node_tmp)->n > (*node_tmp)->next->n)
			(*node_tmp)->prev = (*node_tmp)->next->next;
			(*node_tmp)->next = ((*node_tmp)->next->next)->prev;


	}
}