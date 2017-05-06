#include "libft2.h"

void	ft_putstr(const char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}
