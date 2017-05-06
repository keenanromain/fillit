#include "libft2.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;

	node = *alst;
	while ((*alst)->next)
	{
		node = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = node;
	}
	ft_lstdelone(alst, del);
}
