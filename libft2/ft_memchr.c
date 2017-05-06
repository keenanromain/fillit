#include "libft2.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t bytes_copied;

	bytes_copied = 0;
	while (bytes_copied < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s += 1;
		++bytes_copied;
	}
	return (NULL);
}
