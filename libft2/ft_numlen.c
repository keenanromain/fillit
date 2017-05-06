#include "libft2.h"

int		ft_numlen(int n)
{
	int len;

	len = (n < 0) + 1;
	while (n != 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}
