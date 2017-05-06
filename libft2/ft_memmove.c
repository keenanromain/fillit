#include "libft2.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = malloc(len);
	if (tmp)
	{
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
	}
	free(tmp);
	return (dst);
}
