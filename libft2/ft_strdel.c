#include "libft2.h"

void	ft_strdel(char **as)
{
	char **ptr;

	if (!as)
		return ;
	ptr = as;
	free(*as);
	*ptr = NULL;
}
