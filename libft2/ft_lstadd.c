#include "libft2.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst && new)
		new->next = *alst;
	*alst = new;
}
