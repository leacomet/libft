#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	int *p;


	p = 42;
	list = ft_lstnew(p);
	printf("%d ", list->content);
	free(list);
	return (0);
}
