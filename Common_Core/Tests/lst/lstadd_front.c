/*Adds the node ’new’ at the beginning of the list.*/

#include "list.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list *list;
	t_list	*node;
	char *s = "forty two";

	list = ft_lstnew((void*)s);
	node->content = s;
	ft_lstadd_front(&list, node);
	printf("\n%s", (char*)list->content);
	return 0;
}*/
