#include "libft2.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	mem = malloc(size);
	if (mem)
		ft_bzero(mem, size);
	return (mem);
}
