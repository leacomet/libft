#include "libft.h"
#include <stdio.h>

void	*del(void *c)
{
	(void)c;
}

int	main(void)
{
	char	a[] = "coucou";
	char	b[] = "salut";
	char	c[] = "Huuus";
	char	*test;
	char	*test1;
	char	*test2;

	test = malloc(sizeof(char) *2);
	test1 = malloc(sizeof(char) *2);
	test2 = malloc(sizeof(char) *2);
	test[0] = 'a';
	test[1] = '\0';
	test1[0] = 'b';
	test1[1] = '\0';
	test2[0] = 'c';
	test2[1] = '\0';

	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	**lst;

	*lst = ft_lstnew("DEB");
	list1 = ft_lstnew(test);
	list2 = ft_lstnew(test1);
	list3 = ft_lstnew(test2);
	(*lst)->next = list1;
	list1->next = list2;
	list2->next = list3;
	printf("test\n");

	while ((*lst) != NULL)
	{
		printf("%s ", (*lst)->content);
		(*lst) = (*lst)->next;
	}
//	ft_lstclear(lst, del);

	return (0);
}
