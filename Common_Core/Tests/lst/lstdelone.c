/*Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.*/

#include "list.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
int main()
{
	t_list *list;
        t_list *node2;
        char *s = "test1";

        list = ft_lstnew((void*)s);
        printf("\n%s", (char*)list->content);//should be "test1"
        s = "test2";
        node2 = ft_lstnew((void*)s);
        printf("\n%s", (char*)node2->content);//should be "test2"
        ft_lstadd_back(&list, node2);
        printf("\n%s", (char*)list->content);//should be "test1"
        printf("\n%s", (char*)list->next->content);//should be "test2"
        ft_lstdelone(node2, del(node2->content));
        printf("\n%s", (char*)list->next->content);//should be ""
	return 0;
}
