/*Adds the node ’new’ at the end of the list.*/

#include "list.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int main()
{
	t_list *list;
	t_list *node2;
	char *s = "Hello";

	list = ft_lstnew((void*)s);
	printf("\n%s", (char*)list->content);//should be "Hello"
	s = "World";
	node2 = ft_lstnew((void*)s);
        printf("\n%s", (char*)node2->content);//should be "World"
	ft_lstadd_back(&list, node2);
        printf("\n%s", (char*)list->content);//should be "Hello"
        printf("\n%s", (char*)list->next->content);//should be "World"
	return 0;
}*/
