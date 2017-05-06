#include "libft2.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return ((s1 && s2) ? !ft_strncmp((char *)s1, (char *)s2, n) : 0);
}
