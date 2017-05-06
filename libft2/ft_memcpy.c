#include "libft2.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*source;
	char		*destination;

	source = src;
	destination = dst;
	while (n > 0)
	{
		ft_memset(destination++, *source++, 1);
		n--;
	}
	return (dst);
}
