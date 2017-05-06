#include "libft2.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (s)
		write(fd, ft_strjoin(s, "\n"), ft_strlen((char *)s) + 1);
}
