#include "ft_list.h"
#include <stddef.h>

int	ft_list_size(t_list *head)
{
	int length;
	t_list *current;
	length = 0;
	current = head;
	
	if (head == 0)
		return (0);
	
	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure in your program ft_list_size.c :

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
