#include "libft2.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *str;

	if (!s || !f)
		return ;
	str = s;
	{
		while (*str)
			f(str++);
	}
}
