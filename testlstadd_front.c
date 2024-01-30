#include "libft.h"
#include <stdio.h>

int	main(void)
{
//	t_list	*list2;
	t_list	**lst;
	t_list	*new;

	(*lst) = ft_lstnew("Bonjour");
	new = ft_lstnew("PREUMS");
	ft_lstadd_front(lst, new);
	printf("%s ", (*lst)->content);
	(*lst) = (*lst)->next;
	printf("%s ", (*lst)->content);
}
