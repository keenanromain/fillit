#include "libft2.h"

static t_list	*ft_lstcpynode(t_list *src)
{
	return (src ? ft_lstnew(src->content, src->content_size) : NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*c_node;
	t_list	*p_node;

	if (!lst)
		return (NULL);
	new_lst = ft_lstcpynode(f(lst));
	p_node = new_lst;
	lst = lst->next;
	while (lst)
	{
		c_node = ft_lstcpynode(f(lst));
		p_node->next = c_node;
		p_node = c_node;
		lst = lst->next;
	}
	return (new_lst);
}
