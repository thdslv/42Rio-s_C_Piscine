#include "list.h"

void del(void **content)
{
	if (!*content)
		return ;
	free(*content);
}
