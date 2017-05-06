#include "libft2.h"

int		ft_strfind(char *str, char c)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] == c)
			return (len);
		++len;
	}
	return (len);
}
