#include "libft2.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen((char *)s));
}
