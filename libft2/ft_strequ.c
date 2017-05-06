#include "libft2.h"

int		ft_strequ(const char *s1, const char *s2)
{
	return ((s1 && s2) ? !ft_strcmp((char *)s1, (char *)s2) : 0);
}
