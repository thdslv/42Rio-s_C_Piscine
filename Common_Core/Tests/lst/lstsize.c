/*Counts the number of nodes in a list.*/

#include "list.h"

int ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return size;
}

/*int main()
{
	t_list *list;
	t_list *node2;
	char *s = "hi";
	int size;

	size = ft_lstsize(list);
	printf("\n%d", size);//should be 0
	list = ft_lstnew((void*)s);
	size = ft_lstsize(list);//should be 1
	printf("\n%d", size);
	s = "bye";
	node2 = ft_lstnew((void*)s);
	ft_lstadd_front(&list, node2);
	size = ft_lstsize(list);
	printf("\n%d", size);//should be 2
	printf("\n%s", (char*)list->content);//should be "bye"
	printf("\n%s", (char*)list->next->content);//should be "hi"
	return 0;
}*/
