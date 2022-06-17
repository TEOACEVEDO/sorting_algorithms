#include "sort.h"
/**
 * @brief 
 * 
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *Current = NULL;
    listint_t *Last = NULL;
    listint_t *Nextemp = NULL;

    if(!list || !(*list) || !(*list)->next)
        return;

    Current = (*list)->next;

    while (Current)
    {
        Nextemp = Current->next;
        Last = Current->prev;
        while (Last && Current->n < Last->n)
        {
            if(Last->prev)
              Last->prev->next = Current;
            
            Last->next = Current->next;
            Current->next = Last;
            Current->prev = Last->prev;
            Last->prev = Current;
            
            if(Last->next)
              Last->next->prev = Last;
            
            if(!Current->prev)
              (*list) = Current;  
            
            Last = Current->prev;
        }
        Current = Nextemp;
    }
}