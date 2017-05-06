#include "libft2.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ret;

	ret = b;
	while (len > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b += 1;
		--len;
	}
	return (ret);
}
