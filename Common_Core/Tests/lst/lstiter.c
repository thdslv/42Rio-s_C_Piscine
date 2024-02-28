/*Iterates the list ’lst’ and applies the
function ’f’ on the content of each node.*/

#include "list.h"

/*void function(void *content)
{
	content = "test";
	printf("\n%s", (char*)content);//should be "test"
}*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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
	ft_lstiter(list, function);
	printf("\n%s %s", (char*)list->content, (char*)list->next->content);//should b "Hello World"
	return 0;*/
}
