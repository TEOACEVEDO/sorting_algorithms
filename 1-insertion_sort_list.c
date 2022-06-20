#include "sort.h"

/**
 * @brief 
 * 
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node_tmp = NULL, *tmp = NULL, *Prev = NULL;

	node_tmp = (*list)->next;

	while(node_tmp)
	{
		Prev = node_tmp->prev;
		tmp = node_tmp->next;

		while(Prev && node_tmp->n < Prev->n)
		{
			if(Prev->prev)
				(Prev)->prev->next = node_tmp;

			(Prev)->next = node_tmp->next;
			node_tmp->next = (Prev);
			node_tmp->prev = (Prev)->prev;
			(Prev)->prev = node_tmp;

			if((Prev)->next)
				(Prev)->next->prev = (Prev);

			if(!node_tmp->prev)
				(*list) = node_tmp;

			print_list(*list);
			Prev = node_tmp->prev;		
		}
			
		node_tmp = tmp;
	}
}