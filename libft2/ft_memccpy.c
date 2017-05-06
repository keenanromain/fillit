#include "libft2.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t bytes_copied;

	bytes_copied = 0;
	while (bytes_copied < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst += 1;
		if (*(unsigned char *)src == (unsigned char)c)
			return (dst);
		src += 1;
		++bytes_copied;
	}
	return (NULL);
}
