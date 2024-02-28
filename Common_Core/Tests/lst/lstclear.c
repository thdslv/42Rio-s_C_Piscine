/*Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3). Finally, the pointer to the list must
be set to NULL.*/

#include "list.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

/*int main()
{
	return 0;
}*/
