/*Returns the last node of the list.*/

#include "list.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return lst;
}

/*int main()
{
	t_list *list;
	t_list *node2;
	t_list *last;
	char *s = "test1";

	list = ft_lstnew((void*)s);
	printf("\n%s", (char*)list->content);//should be "test1"
	s = "test2";
	node2 = ft_lstnew((void*)s);
	printf("\n%s", (char*)node2->content);//should be "test2"
	ft_lstadd_front(&list, node2);
	printf("\n%s", (char*)list->content);//should be "test2"
	printf("\n%s", (char*)list->next->content);//should be "test1"
	last = ft_lstlast(list);
	printf("\n%s", (char*)last->content);//should be "test1"
	return 0;
}*/
